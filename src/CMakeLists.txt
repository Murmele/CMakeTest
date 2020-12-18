project(src)
cmake_minimum_required(VERSION 3.16)

add_subdirectory(Test123)

add_library(hallo SHARED hallo.cpp)
target_link_libraries(hallo PUBLIC test) # public is important, otherwise the MAIN target will not find the test.h and test.cpp file
target_include_directories(hallo PUBLIC .) # must be PUBLIC, otherwise it gets not found by the target which includes this target (MAIN)
