cmake_minimum_required(VERSION 3.11.0)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

project(c_cpp_examples)


add_subdirectory(utilities)


add_subdirectory(impl)
add_subdirectory(thread)
add_subdirectory(thread_syncronization)
add_subdirectory(class_template)
add_subdirectory(extern_C)
add_subdirectory(operator_overloading)
add_subdirectory(pretty_cout)
add_subdirectory(smart_pointer)
add_subdirectory(uniform_initialization)
add_subdirectory(casting)
add_subdirectory(string_and_string_view)
add_subdirectory(enum_class)
add_subdirectory(inl)