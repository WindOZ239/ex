set(MODULE_NAME lib_stat)

project(${MODULE_NAME})

set(CMAKE_CXX_STANDARD 14)

add_library(${MODULE_NAME} STATIC
        include/lib_stat.h
        src/lib_stat.cpp
        )


target_include_directories(${MODULE_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> $<INSTALL_INTERFACE:include>)