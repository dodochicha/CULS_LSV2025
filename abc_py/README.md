abc\_py
--------
A simple Python interface for logic synthesis framework [abc](https://github.com/berkeley-abc/abc).
You are welcome to cite ` Keren Zhu, Mingjie Liu, Hao Chen, Zheng Zhao and David Z. Pan,"Exploring Logic Optimizations with Reinforcement Learning and Graph Convolutional Network," 2nd ACM/IEEE Workshop on Machine Learning for CAD (MLCAD), Nov. 2020. `



--------
# Install

# abc
[abc](https://github.com/berkeley-abc/abc)

abc\_py requires a static library for abc, and to make it shareable. `-fPIC` flag needs to be added to gcc or Clang.

Then compile the abc
```
 make ABC_USE_NO_READLINE=1 ABC_USE_PIC=1 libabc.a
```

Note that ABC is defining several macros at build. Please check their Makafile and define them too in CMakeLists.txt, otherwise there might be errors when including the headers. 

# pybind11
[pybind11](https://github.com/pybind/pybind11)

Please see the official [document](http://pybind11.readthedocs.org/en/master) for installing the pybind11.

# Makefile Configure

The project is tested with `cmake 3.13.2`. [cmake](https://cmake.org/)
Export `CXX` to the compiler you like. The tested is made on `g++ 6.3.0 and 9.2.0`.

Correctly set the path to abc directory. Either export to system variable `ABC_DIR` or add flag to cmake `cmake -DABC_DIR=<path>`. 
Make sure the libabc.a is inside `${ABC_DIR}`.

Set the path to pybind11. Either export to system variable `PYBIND11_DIR` or add flag to cmake `cmake -DPYBIND11_DIR=<path>`.

The cmake will automatically find the system Python.
To use the other Python, add cmake flags `cmake -DPYTHON_INCLUDE_DIR=<path> -DPYTHON_LIBRARIES=<static libarary>`.
For example, `-DPYTHON_INCLUDE_DIR=<path>/include/python3.7m -DPYTHON_LIBRARIES=<path>/lib/libpython3.7m.a`

It's also important to find the correct platform configuration for ABC (`error: #error unknown platform`). The ABC uses different data types for different data configuration.
In the ABC software, there is a script `arch_flags` to identify the data types of your platform. It will gives the configuration, for example, `-DLIN64 -DSIZEOF_VOID_P=8 -DSIZEOF_LONG=8 -DSIZEOF_INT=4`, and those are the compile flags need to be included. They need be added to `CMAKE_CXX_FLAGS`. Please edit the `CMakeLists.txt`, and add the flags. An common example is `set(CMAKE_CXX_FLAGS "-DLIN64 -DSIZEOF_VOID_P=8 -DSIZEOF_LONG=8 -DSIZEOF_INT=4 -std=c++14 -Wall -march=native -fopenmp -fPIC") `

# Build
```
mkdir build
cd build
cmake ..
make
cd ../../
pip install abc_py/
```

--------
# CULS GPU commands (gget/gresyn2/gput)

This repository contains a CULS-patched ABC executable (`build/abcg`) that adds GPU commands such as `gget`, `gresyn2`, and `gput`.
`abc_py` can be built to expose the same commands through `AbcInterface.abc_command(...)`.

Recommended (compile from source, requires `nvcc`):
```
pip install pybind11
cd abc_py
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DABC_PY_ENABLE_CULS_GPU=ON -DABC_PY_CULS_GPU_BACKEND=source -DCMAKE_CUDA_COMPILER=/usr/local/cuda/bin/nvcc
cmake --build build -j
pip install -e .
```

Alternative (link prebuilt objects from top-level `build/abcg`, does not require `nvcc` in the current environment):
- Build the top-level project first (to generate `build/abcg` and `build/CMakeFiles/abcg.dir/*.o`), and ensure those objects are compiled with `-fPIC` (set `-DCMAKE_POSITION_INDEPENDENT_CODE=ON` when building top-level CMake).
- Then build `abc_py` with:
```
cd abc_py
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DABC_PY_ENABLE_CULS_GPU=ON -DABC_PY_CULS_GPU_BACKEND=prebuilt
cmake --build build -j
pip install -e .
```

If you prefer `pip install -e .` to drive CMake, you can pass extra CMake flags through `CMAKE_ARGS`:
```
CMAKE_ARGS="-DABC_PY_ENABLE_CULS_GPU=ON -DABC_PY_CULS_GPU_BACKEND=prebuilt -DCULS_BUILD_DIR=/nfs/home/tensore/CULS_LSV2025/build" pip install -e .
```

Tip: make sure you run `pip` inside the Python environment that has `pybind11` installed
(the build uses `python -c "import pybind11"` to locate pybind11's CMake config).

If you see linker errors like `recompile with -fPIC` when using the `prebuilt` backend, it means
the CUDA `.cu.o` objects from `abcg` were not compiled as PIC. In that case either:
- rebuild `abcg` with CUDA PIC enabled (e.g. pass `-Xcompiler=-fPIC` to nvcc), or
- switch to `-DABC_PY_CULS_GPU_BACKEND=source` (recommended).
--------
# Usage

`import abc_py` like the standard Python library.

--------
# Acknolwedgement

I want to thank  binderwang and Zehua Pei for investigating some building issues of this software.

--------
# Contact.
Keren Zhu, The University of Texas at Austin
[UTDA](https://www.cerc.utexas.edu/utda/)

Please let me know if there is any issue or suggestions.
