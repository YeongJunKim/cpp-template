cmake_minimum_required(VERSION 3.5.0)

project(thread)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-std=gnu++17)


add_executable(${PROJECT_NAME}_ex1 ex1.cpp)
add_executable(${PROJECT_NAME}_ex2 ex2.cpp)
add_executable(${PROJECT_NAME}_ex3 ex3.cpp)