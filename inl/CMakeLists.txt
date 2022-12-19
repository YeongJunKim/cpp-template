cmake_minimum_required(VERSION 3.11.0)
project(inl)

add_compile_options(-std=gnu++17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

link_libraries(cslPrinter)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} cslPrinter csl_core)
