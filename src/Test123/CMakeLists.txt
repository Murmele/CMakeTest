project(Test)
cmake_minimum_required(VERSION 3.16)


add_library(test ${PROJECT_SOURCE_DIR}/test.cpp)
target_include_directories(test PUBLIC ${PROJECT_SOURCE_DIR})
