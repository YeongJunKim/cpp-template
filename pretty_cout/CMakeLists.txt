cmake_minimum_required(VERSION 3.5.0)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-std=gnu++17)

project(cout)


add_executable(${PROJECT_NAME}_ex1 ex1.cpp)
target_include_directories(${PROJECT_NAME}_ex1 PUBLIC ./)

add_executable(${PROJECT_NAME}_ex2 ex2.cpp)
target_include_directories(${PROJECT_NAME}_ex2 PUBLIC ./)

find_package(Boost COMPONENTS system filesystem REQUIRED)
add_executable(${PROJECT_NAME}_ex3 ex3.cpp)
target_include_directories(${PROJECT_NAME}_ex3 PUBLIC ./)
target_link_libraries(${PROJECT_NAME}_ex3 PUBLIC ${Boost_LIBRARIES})