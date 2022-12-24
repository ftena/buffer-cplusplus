## application name
SET( APP_NAME "ex3")

## include directories
INCLUDE_DIRECTORIES ( 
	${CMAKE_CURRENT_SOURCE_DIR}/../../src/
)

## library paths
## adds the paths in which the linker should search for libraries.
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
