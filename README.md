buffer-c++
=========

Read standard C &amp; C++ data types from buffer.

Please, read header for more information.

# Requirements

- gcc 14
- CMake
- conan 2

# Compilation

    $ conan config install conan_profiles
    $ mkdir build && cd build
    $ conan install .. -pr=gcc11_cxx17_release -pr:b=default --output-folder .
    $ cmake .. -DCMAKE_TOOLCHAIN_FILE=./conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
    $ cmake --build . --parallel 4

To enable and compile the tests:

    $ cmake .. -DCMAKE_TOOLCHAIN_FILE=./conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DTESTS=TRUE
    $ cmake --build . --parallel 4
