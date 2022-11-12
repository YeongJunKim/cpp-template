cmake_minimum_required(VERSION 3.5.0)

project(logger)

set(CMAKE_CXX_STANDARD_REQUIRED 17)
add_compile_options(-std=gnu++17)

set(${PROJECT_NAME}_main_sources
    Logger.cpp
    main.cpp
)

find_package(Boost COMPONENTS system filesystem REQUIRED)


add_executable(${PROJECT_NAME}_main ${${PROJECT_NAME}_main_sources})
target_include_directories(${PROJECT_NAME}_main PUBLIC ./)
target_link_libraries(${PROJECT_NAME}_main ${Boost_LIBRARIES})