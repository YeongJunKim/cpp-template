cmake_minimum_required(VERSION 3.5.0)

project(c_cpp_examples)

include_directories(./utilities/printer/)

add_subdirectory("utilities")
add_subdirectory("impl")
add_subdirectory("thread")
add_subdirectory("thread_syncronization")
add_subdirectory("class_template")
add_subdirectory("extern_C")
add_subdirectory("operator_overloading")
add_subdirectory("pretty_cout")
add_subdirectory("smart_pointer")
add_subdirectory("uniform_initialization")
add_subdirectory("casting")
add_subdirectory("string_and_string_view")
add_subdirectory("enum_class")