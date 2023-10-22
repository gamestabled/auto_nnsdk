cmake_minimum_required(VERSION 3.5)

project(nnsdk CXX ASM)

file(GLOB_RECURSE csourcefiles "Source/*.c")
file(GLOB_RECURSE cxxsourcefiles "Source/*.cpp")

add_library(nnsdk ${csourcefiles} ${cxxsourcefiles})

target_include_directories(nnsdk PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Include)
