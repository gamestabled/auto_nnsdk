cmake_minimum_required(VERSION 3.5)

project(nnsdk CXX ASM)

file(GLOB_RECURSE nnsdk_csourcefiles ${CMAKE_CURRENT_SOURCE_DIR}/Source/*.c)
file(GLOB_RECURSE nnsdk_cxxsourcefiles ${CMAKE_CURRENT_SOURCE_DIR}/Source/*.cpp)

add_library(nnsdk ${nnsdk_csourcefiles} ${nnsdk_cxxsourcefiles})

target_include_directories(nnsdk PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Include)
