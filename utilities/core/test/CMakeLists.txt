cmake_minimum_required(VERSION 3.11.0)

project(core_test)

find_package(GTest REQUIRED)

link_libraries(csl_core)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
message(STATUS "TESTING START")
add_executable(core_test_case core_test.cc)
target_link_libraries(core_test_case csl_core gtest gtest_main)
include(GoogleTest)
# gtest_discover_tests(core_test_case)
add_test(NAME tt COMMAND core_test_case)
message(STATUS "TESTING DONE")