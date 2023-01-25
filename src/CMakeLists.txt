## application name
set( LIB_NAME "Buffer" )

## sources
set( SOURCES 
	${CMAKE_CURRENT_SOURCE_DIR}/Buffer.cpp
)

## headers
set( HEADERS 
	${CMAKE_CURRENT_SOURCE_DIR}/Buffer.h
)

## dynamic library
option( BUILD_SHARED_LIBS "Build with shared libraries." ON )
add_library( ${LIB_NAME} SHARED ${HEADERS} ${SOURCES} )

## include directories to use when compiling a given target.
## old ways, like include_directories or link_directories, are legacy.
## more info:
## https://cmake.org/cmake/help/latest/command/include_directories.html
## https://cmake.org/cmake/help/latest/command/link_directories.html
target_include_directories(${LIB_NAME} PUBLIC .)

