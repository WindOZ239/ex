cmake_minimum_required(VERSION 2.6)

project(main1)

set (${PROJECT_SOURCE_DIR}_VERSION_MAJOR 0)
set (${PROJECT_SOURCE_DIR}_VERSION_MINOR 2)
set (${PROJECT_SOURCE_DIR}_VERSION_PATCH 3)
set (${PROJECT_SOURCE_DIR}_VERSION_TWEAK 4)
set (Example_VERSION "${${PROJECT_SOURCE_DIR}_VERSION_MAJOR}.${${PROJECT_SOURCE_DIR}_VERSION_MINOR}.${${PROJECT_SOURCE_DIR}_VERSION_PATCH}.${${PROJECT_SOURCE_DIR}_VERSION_TWEAK}")

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-static")


file (GLOB
        CPP_SOURCES "*.cpp")


configure_file(
        "D:/CLionProjects/Example/include/ver.h.in"
        "D:/CLionProjects/Example/include/version.h"
)

configure_file(
        "D:/CLionProjects/Example/include/path.h.in"
        "D:/CLionProjects/Example/include/path.h"
)

add_executable (${PROJECT_NAME} ${CPP_SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PRIVATE lib_stat lib_shar)