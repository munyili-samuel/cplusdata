cmake_minimum_required(VERSION 3.13)
project(EDx_Intermediate)

set(CMAKE_CXX_STANDARD 17)

add_executable(EDx_Intermediate main.cpp Headers/Person.h Sources/Person.cpp Headers/Student.h Sources/Student.cpp)