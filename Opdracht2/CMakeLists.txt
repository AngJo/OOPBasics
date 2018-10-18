cmake_minimum_required(VERSION 3.12)
project(Opdracht2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Opdracht2
        Docent.cpp
        Docent.h
        main.cpp
        Persoon.cpp
        Persoon.h
        Student.cpp
        Student.h)
