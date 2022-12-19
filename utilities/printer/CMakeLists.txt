cmake_minimum_required(VERSION 3.11.0)

set(CMAKE_CXX_STANDARD 17)

project(pretty_std VERSION 1.0.0)

add_library(cslPrinter SHARED csl/printer/src/Printer.cpp)
target_include_directories(cslPrinter
    PUBLIC
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/csl/inc>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

install(TARGETS cslPrinter
    EXPORT cslPrinter-export
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

install(EXPORT cslPrinter-export
    FILE
    cslPrinterTargets.cmake
    NAMESPACE
    cslPrinter::
    DESTINATION
    lib/cmake/cslPrinter
)

install(FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/csl/printer/inc/Printer.h
    DESTINATION
    "include/cslPrinter"
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/cslPrinterConfig.cmake
    DESTINATION "lib/cmake/cslPrinter"
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/cslPrinterConfigVersion.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/cslPrinterConfigVersion.cmake
    DESTINATION "lib/cmake/cslPrinter"
)

# target_include_directories(colson_printer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# add_executable(${PROJECT_NAME}_ex1 ex1.cpp)
# target_link_libraries(${PROJECT_NAME}_ex1 colson_printer)

# add_executable(${PROJECT_NAME}_ex2 ex2.cpp)

# find_package(Boost COMPONENTS system filesystem REQUIRED)
# add_executable(${PROJECT_NAME}_ex3 ex3.cpp)
# target_link_libraries(${PROJECT_NAME}_ex3 PUBLIC ${Boost_LIBRARIES})
