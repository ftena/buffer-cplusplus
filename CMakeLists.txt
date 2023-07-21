## project name
project( "Buffer")

## require a minimum version of CMake
cmake_minimum_required( VERSION 3.14 FATAL_ERROR )

## add definitions, compiler switches, etc.
set(CMAKE_CXX_STANDARD 14)
add_definitions( -Wall -O2 )
set( CMAKE_CXX_FLAGS -g )

## include (or not) the full compiler output
set(CMAKE_VERBOSE_MAKEFILE OFF )

## link
add_subdirectory (src)
add_subdirectory (test)
add_subdirectory (examples/ex1)
add_subdirectory (examples/ex2)
add_subdirectory (examples/ex3)
