#!/usr/bin/env bash
set -euo pipefail

# Build/install `abc_py` with the CULS GPU commands enabled (source backend).
#
# Usage:
#   conda activate abc_rl
#   bash abcRL/setup_abc_py_culs_source.sh
#
# Optional env vars:
#   CUDA_NVCC=/usr/local/cuda/bin/nvcc

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
ABC_PY_DIR="${REPO_ROOT}/abc_py"

CUDA_NVCC="${CUDA_NVCC:-/usr/local/cuda/bin/nvcc}"

if [[ ! -d "${ABC_PY_DIR}" ]]; then
  echo "Error: abc_py directory not found at: ${ABC_PY_DIR}" >&2
  exit 1
fi

if [[ ! -x "${CUDA_NVCC}" ]]; then
  echo "Error: nvcc not found or not executable at: ${CUDA_NVCC}" >&2
  echo "Set CUDA_NVCC=/path/to/nvcc, or install CUDA." >&2
  exit 1
fi

echo "[1/4] Clean abc_py build caches"
rm -rf "${ABC_PY_DIR}/build" "${ABC_PY_DIR}/build_culs" "${ABC_PY_DIR}/build/temp.linux-"*

echo "[2/4] Ensure pybind11 is available in current Python"
python -c "import pybind11; print('pybind11 cmake dir:', pybind11.get_cmake_dir())"

echo "[3/4] Install abc_py (editable) with CULS GPU source backend"
(
  cd "${ABC_PY_DIR}"
  CMAKE_ARGS="-DABC_PY_ENABLE_CULS_GPU=ON -DABC_PY_CULS_GPU_BACKEND=source -DCMAKE_CUDA_COMPILER=${CUDA_NVCC}" \
    python -m pip install -e .
)

echo "[4/4] Quick sanity check (gget should be recognized)"
python - <<'PY'
import abc_py

a = abc_py.AbcInterface()
a.start()
ok = a.abc_command("read ../abc/i10.aig")
ok = ok and a.abc_command("gget")
a.end()
print("OK" if ok else "FAILED")
PY
