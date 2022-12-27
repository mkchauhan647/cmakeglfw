cmake_minimum_required(VERSION 3.24)

project(testcmake)

set(Sources main.cpp)


add_executable(testcmake ${Sources})

add_subdirectory(external/glfw)
add_subdirectory(external/opencv)

target_include_directories(${PROJECT_NAME} PRIVATE external/glfw/include  external/opencv/include)

target_link_libraries(${PROJECT_NAME} PRIVATE glfw opencv_ml)



