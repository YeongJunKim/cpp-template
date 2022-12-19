cmake_minimum_required(VERSION 3.11.0)

project(casting)

add_compile_options(-std=gnu++17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

link_libraries(cslPrinter)

add_executable(${PROJECT_NAME}_const_cast const_cast.cpp)
add_executable(${PROJECT_NAME}_static_cast static_cast.cpp)
add_executable(${PROJECT_NAME}_reinterpret_cast reinterpret_case.cpp)
add_executable(${PROJECT_NAME}_dynamic_cast dynamic_cast.cpp)