cmake_minimum_required(VERSION 3.5.0)

project(thread_syncronization)

set(CMAKE_CXX_STANDARD 17)

set(MUTEX true)


if(MUTEX)
    add_subdirectory(mutex)
endif()
