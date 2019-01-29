cmake_minimum_required(VERSION 3.13)
project(NaolSoft)

set(CMAKE_CXX_STANDARD 17)

add_executable(NaolSoft main/main.cpp connection/connect.cpp connection/connect.h main/pointers.cpp main/headers/pointers.h main/references.cpp main/headers/references.h main/memory.cpp main/headers/memory.h)