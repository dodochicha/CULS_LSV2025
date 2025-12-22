import os
import re
import sys
import platform
import subprocess
import shlex

from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext
from distutils.version import LooseVersion


class CMakeExtension(Extension):
    def __init__(self, name, sourcedir=''):
        Extension.__init__(self, name, sources=[])
        self.sourcedir = os.path.abspath(sourcedir)


class CMakeBuild(build_ext):
    def run(self):
        try:
            out = subprocess.check_output(['cmake', '--version'])
        except OSError:
            raise RuntimeError("CMake must be installed to build the following extensions: " +
                               ", ".join(e.name for e in self.extensions))

        if platform.system() == "Windows":
            cmake_version = LooseVersion(re.search(r'version\s*([\d.]+)', out.decode()).group(1))
            if cmake_version < '3.1.0':
                raise RuntimeError("CMake >= 3.1.0 is required on Windows")

        for ext in self.extensions:
            self.build_extension(ext)

    def build_extension(self, ext):
        extdir = os.path.abspath(os.path.dirname(self.get_ext_fullpath(ext.name)))
        cmake_args = ['-DCMAKE_LIBRARY_OUTPUT_DIRECTORY=' + extdir,
                      '-DPYTHON_EXECUTABLE=' + sys.executable]

        # If pybind11 is installed in this Python, pass its CMake dir explicitly.
        # This avoids depending on user environment variables (PYBIND11_DIR/pybind11_DIR).
        try:
            import pybind11  # type: ignore

            pybind11_cmake_dir = pybind11.get_cmake_dir()
            if pybind11_cmake_dir:
                cmake_args += ['-DPYBIND11_DIR=' + pybind11_cmake_dir]
        except Exception:
            # Let CMake handle discovery / raise a meaningful error.
            pass

        # Allow users (or CI) to pass extra CMake options through environment variables.
        # Example:
        #   CMAKE_ARGS="-DABC_PY_ENABLE_CULS_GPU=ON -DABC_PY_CULS_GPU_BACKEND=prebuilt -DCULS_BUILD_DIR=/path/to/build"
        extra_cmake_args = os.environ.get("CMAKE_ARGS", "").strip()
        if extra_cmake_args:
            cmake_args += shlex.split(extra_cmake_args)

        # If CUDA is installed but nvcc is not on PATH, help CMake find it.
        # This matters for the CULS GPU "source" backend.
        has_cuda_compiler_flag = any(
            arg.startswith("-DCMAKE_CUDA_COMPILER=") for arg in cmake_args
        )
        if not has_cuda_compiler_flag:
            default_nvcc = "/usr/local/cuda/bin/nvcc"
            if os.path.exists(default_nvcc):
                cmake_args += ["-DCMAKE_CUDA_COMPILER=" + default_nvcc]

        # Backward/alternative: allow passing CULS_BUILD_DIR directly.
        culs_build_dir = os.environ.get("CULS_BUILD_DIR", "").strip()
        if culs_build_dir:
            cmake_args += ['-DCULS_BUILD_DIR=' + culs_build_dir]

        cfg = 'Debug' if self.debug else 'Release'
        build_args = ['--config', cfg]

        if platform.system() == "Windows":
            cmake_args += ['-DCMAKE_LIBRARY_OUTPUT_DIRECTORY_{}={}'.format(cfg.upper(), extdir)]
            if sys.maxsize > 2**32:
                cmake_args += ['-A', 'x64']
            build_args += ['--', '/m']
        else:
            cmake_args += ['-DCMAKE_BUILD_TYPE=' + cfg]
            build_args += ['--', '-j2']

        env = os.environ.copy()
        env['CXXFLAGS'] = '{} -DVERSION_INFO=\\"{}\\"'.format(env.get('CXXFLAGS', ''),
                                                              self.distribution.get_version())
        if not os.path.exists(self.build_temp):
            os.makedirs(self.build_temp)
        subprocess.check_call(['cmake', ext.sourcedir] + cmake_args, cwd=self.build_temp, env=env)
        subprocess.check_call(['cmake', '--build', '.'] + build_args, cwd=self.build_temp)

setup(
    name='abc_py',
    version='0.0.1',
    author='Keren Zhu',
    author_email='keren.zhu@utexas.edu',
    description='The python interface to ABC',
    long_description='',
    ext_modules=[CMakeExtension('abc_py')],
    cmdclass=dict(build_ext=CMakeBuild),
    zip_safe=False,
)
