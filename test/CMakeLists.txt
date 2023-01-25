## more info @ https://google.github.io/googletest/quickstart-cmake.html

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

set( LIBS
	Buffer
)

add_executable(
  test
  test.cpp
)

target_link_libraries(
  test
  ${LIBS}
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test)
