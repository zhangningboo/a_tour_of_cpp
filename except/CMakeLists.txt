cmake_minimum_required(VERSION 3.22)
project(except)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-fmodules-ts")  # 添加module支持

add_executable(except src/main.cpp)