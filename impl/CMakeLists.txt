cmake_minimum_required(VERSION 3.5.0)

project(impl)

add_compile_options(-std=gnu++17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(${PROJECT_NAME}_main_sources
main.cpp
PacketHandler.cpp
Colbot.cpp
Serial.cpp
)

add_executable(${PROJECT_NAME}_main ${${PROJECT_NAME}_main_sources})
target_include_directories(${PROJECT_NAME}_main PUBLIC ./)

