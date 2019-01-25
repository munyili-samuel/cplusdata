cmake_minimum_required(VERSION 3.13)
project(NaolSoft)

set(CMAKE_CXX_STANDARD 17)

add_executable(NaolSoft main.cpp connection/connect.cpp connection/connect.h)