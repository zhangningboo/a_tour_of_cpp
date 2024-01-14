cmake_minimum_required(VERSION 3.22)
project(base_20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-fmodules-ts")  # 添加module支持
#set(CMAKE_GENERATOR "/usr/bin/ninja")
#set(CMAKE_C_COMPILER "clang-15")
#set(CMAKE_CXX_COMPILER "clang++-15")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -isystem /usr/lib/llvm-15/lib/clang/15/include -Wall -Wextra -Wunused-parameter")

add_library(Vector src/Vector.cpp)

add_executable(base_20 src/main.cpp)

link_libraries(base_20 Vector)

target_link_libraries(base_20 PRIVATE Vector)
