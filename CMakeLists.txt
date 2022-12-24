## project name
PROJECT( "Buffer" )

## require a minimum version of CMake
CMAKE_MINIMUM_REQUIRED ( VERSION 2.9 FATAL_ERROR )

## add definitions, compiler switches, etc.
ADD_DEFINITIONS( -Wall -O2 )
SET( CMAKE_CXX_FLAGS -g )

## include (or not) the full compiler output
SET( CMAKE_VERBOSE_MAKEFILE OFF )

## link
add_subdirectory (src)
add_subdirectory (examples/ex1)
add_subdirectory (examples/ex2)
add_subdirectory (examples/ex3)
