project(CMAKETEST)
cmake_minimum_required(VERSION 3.16)

# includes shared library hallo to which the target test is linked
# so in main the function of hallo.cpp and test.cpp are available
add_subdirectory(src)

add_executable(MAIN main.cpp) # do not include target here with $<TARGET_OBJECTS:hallo>, because then only the sources of the target are included
target_link_libraries(MAIN PRIVATE hallo)
