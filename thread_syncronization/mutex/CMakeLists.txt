cmake_minimum_required(VERSION 3.5.0)

project(mutex)

set(CMAKE_CXX_STANDARD 11)

set(${PROJECT_NAME}_sources
    main.cpp
)

add_executable(${PROJECT_NAME}_mutex ex0.cpp)
add_executable(${PROJECT_NAME}_lock_guard ex1.cpp)
add_executable(${PROJECT_NAME}_unique_lock ex2.cpp)
