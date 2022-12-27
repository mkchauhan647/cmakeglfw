cmake_minimum_required(VERSION 3.0)

project(testcmake)

set(Sources main.cpp)

# add_subdirectory(external/glfw)

add_executable(testcmake ${Sources})

# target_include_directories(testcmake PRIVATE glfw/include)

# target_link_libraries(testcmake PRIVATE glfw)



