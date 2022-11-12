cmake_minimum_required(VERSION 3.5.0)

project(extern_c)

link_directories(
    ./
)

add_executable(${PROJECT_NAME}_test1 main.cpp test1.h)
target_compile_definitions(${PROJECT_NAME}_test1 PRIVATE TEST1=1)

add_executable(${PROJECT_NAME}_test2 main.cpp test2.h)
target_compile_definitions(${PROJECT_NAME}_test2 PRIVATE TEST2=1)
