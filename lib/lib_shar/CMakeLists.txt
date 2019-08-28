set(MODULE_NAME lib_shar)

project(${MODULE_NAME})

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-static")

add_library(${MODULE_NAME} SHARED
        include/lib_shar.h
        src/lib_shar.cpp
        )

target_include_directories(${MODULE_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> $<INSTALL_INTERFACE:include>)

