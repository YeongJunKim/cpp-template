cmake_minimum_required(VERSION 3.5.0)

project("enum_class")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(${PROJECT_NAME}_method_src
    ex1.cpp
)

add_executable(${PROJECT_NAME}_method ${${PROJECT_NAME}_method_src})