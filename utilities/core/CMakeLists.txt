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

if(MSVC)
    set(MIDLE_FIX "windows")
elseif(APPLE)
    set(MIDLE_FIX "apple")
elseif(UNIX)
    set(MIDLE_FIX "linux")
endif()

set(keyEvent_src
    csl/hardware/keyboard/KeyboardHandler.cpp
    csl/hardware/keyboard/${MIDLE_FIX}/Keyboard.cpp
)
set(keyEvent_inc
    csl/hardware/keyboard/KeyboardHandler.h
    csl/hardware/keyboard/${MIDLE_FIX}/Keyboard.h
)
add_library(csl_keyEvent STATIC ${keyEvent_src} ${keyEvent_inc})

if(MSVC)
target_compile_definitions(csl_keyEvent PUBLIC MSVC)
elseif(APPLE)
    target_link_libraries(csl_keyEvent CMAKE_MACOSX_BUNDLE)
    target_compile_definitions(csl_keyEvent PUBLIC APPLE)
elseif(UNIX)
target_compile_definitions(csl_keyEvent PUBLIC UNIX)
endif()

# add_library(csl_compact DEFAULT)
# target_link_libraries(csl_compact csl_core csl_keyEvent)

# set(time_inc
# csl/time/Tick.h)
# add_library(csl_time SHARED ${time_inc})
add_subdirectory(test)