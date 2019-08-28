cmake_minimum_required(VERSION 2.6)

project(Example)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-static")

add_subdirectory(lib/lib_shar)
add_subdirectory(lib/lib_stat)
add_subdirectory(src)