cmake_minimum_required(VERSION 3.6)
project(dz2clion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp string_obj.cpp string_obj.h func.h func.cpp Stack_str.cpp Stack_str.hpp)
add_executable(dz2clion ${SOURCE_FILES})