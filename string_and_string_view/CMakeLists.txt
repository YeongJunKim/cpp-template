cmake_minimum_required(VERSION 3.5.0)

project(string_and_string_view)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-std=gnu++17)

add_executable(${PROJECT_NAME}_ex1 raw_string_literal.cpp)
add_executable(${PROJECT_NAME}_ex2 low_level_convert.cpp)
add_executable(${PROJECT_NAME}_ex3 raw_string_literal.cpp)