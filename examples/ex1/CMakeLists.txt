## application name
SET( APP_NAME "ex1")

## project name
PROJECT( ${APP_NAME} )

## require a minimum version of CMake
CMAKE_MINIMUM_REQUIRED ( VERSION 2.6 FATAL_ERROR )

## add definitions, compiler switches, etc.
ADD_DEFINITIONS( -Wall -O2 )
SET( CMAKE_CXX_FLAGS -g )

## include (or not) the full compiler output
SET( CMAKE_VERBOSE_MAKEFILE OFF )

## include directories
INCLUDE_DIRECTORIES ( 
	${CMAKE_CURRENT_SOURCE_DIR}/../../src/
)

## library paths
LINK_DIRECTORIES(
	${CMAKE_CURRENT_SOURCE_DIR}/../../src/
)

SET( LIBS
	Buffer
)

## sources
SET( SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

## executable
ADD_EXECUTABLE( ${APP_NAME} ${SOURCES} )

## link
TARGET_LINK_LIBRARIES( ${APP_NAME} ${LIBS} )


