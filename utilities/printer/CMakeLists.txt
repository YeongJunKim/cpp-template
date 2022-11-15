cmake_minimum_required(VERSION 3.11.0)

set(CMAKE_CXX_STANDARD 17)

project(pretty_std)

add_library(colson_printer SHARED Printer.cpp)
target_include_directories(colson_printer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${PROJECT_NAME}_ex1 ex1.cpp)
target_link_libraries(${PROJECT_NAME}_ex1 colson_printer)

add_executable(${PROJECT_NAME}_ex2 ex2.cpp)

find_package(Boost COMPONENTS system filesystem REQUIRED)
add_executable(${PROJECT_NAME}_ex3 ex3.cpp)
target_link_libraries(${PROJECT_NAME}_ex3 PUBLIC ${Boost_LIBRARIES})
