# cmake_minimum_required(VERSION <specify CMake version here>)
project(OOPBasics)

set(CMAKE_CXX_STANDARD 98)

add_executable(OOPBasics main.cpp cmake-build-debug/Rectangle.cpp cmake-build-debug/Rectangle.h cmake-build-debug/Persoon.cpp cmake-build-debug/Persoon.h)