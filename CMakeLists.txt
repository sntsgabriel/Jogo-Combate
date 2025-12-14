cmake_minimum_required(VERSION 3.16)
project(JogoCombate LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(JogoCombate
    src/main.cpp
    src/functions.cpp
)
