cmake_minimum_required(VERSION 3.11.0)
project(inl)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} colson_printer csl_core)
