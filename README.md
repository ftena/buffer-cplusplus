buffer-c++
=========

Read standard C &amp; C++ data types from buffer.

Please, read header for more information.

# Requirements

- CMake
- conan 2.0

# Compilation

    $ mkdir build && cd build
    $ conan install .. -pr=default -pr:b=default 
    $ cmake .. -DCMAKE_TOOLCHAIN_FILE=./conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
    $ cmake --build . --parallel 4

To enable and compile the tests:

    $ cmake .. -DCMAKE_TOOLCHAIN_FILE=./conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DTESTS=TRUE
    $ cmake --build . --parallel 4
