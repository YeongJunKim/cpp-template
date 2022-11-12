cmake_minimum_required(VERSION 3.5.0)

set(CMAKE_CXX_STANDARD_REQUIRED 17)

project("class_template")

add_compile_options(-std=gnu++17)

set(${PROJECT_NAME}_sources
    main.cpp
)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ./)
