####################################
####   specific parameters
####################################

## application name
SET( LIB_NAME "Buffer" )

####################################
####   common parameters
####################################

## require a minimum version of CMake
CMAKE_MINIMUM_REQUIRED ( VERSION 2.6 FATAL_ERROR )

## add definitions, compiler switches, etc.
ADD_DEFINITIONS( -Wall -O2 )
SET( CMAKE_CXX_FLAGS -g )

## include (or not) the full compiler output
SET( CMAKE_VERBOSE_MAKEFILE OFF )

## include directories
INCLUDE_DIRECTORIES ( 
)

## library paths
LINK_DIRECTORIES(
)

## libraries
SET( LIBS
	)

## sources
SET( SOURCES 
	${CMAKE_CURRENT_SOURCE_DIR}/Buffer.cpp
)

## headers
SET( HEADERS 
	${CMAKE_CURRENT_SOURCE_DIR}/Buffer.h
)

## dynamic library
OPTION( BUILD_SHARED_LIBS "Build with shared libraries." ON )
ADD_LIBRARY( ${LIB_NAME} SHARED ${HEADERS} ${SOURCES} )

## link
TARGET_LINK_LIBRARIES( ${LIB_NAME} ${LIBS} )

