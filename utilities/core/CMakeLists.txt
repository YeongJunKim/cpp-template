cmake_minimum_required(VERSION 3.11.0)
project(csl_core LANGUAGES CXX VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads REQUIRED)

include_directories(PUBLIC ./)
link_libraries(Threads::Threads)

set(core_src
    csl/core/Core.cpp)
set(core_inc
    csl/core/Core.h)

add_library(csl_core STATIC ${core_src} ${core_inc})
target_include_directories(csl_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set(keyEvent_src
    csl/hardware/KeyEvent.cpp)
set(keyEvent_inc
    csl/hardware/KeyEvent.h)
add_library(csl_keyEvent STATIC ${keyEvent_src} ${keyEvent_inc})


# set(time_inc
#     csl/time/Tick.h)
# add_library(csl_time SHARED ${time_inc})


add_subdirectory(test)