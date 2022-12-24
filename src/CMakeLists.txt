## application name
SET( LIB_NAME "Buffer" )

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

