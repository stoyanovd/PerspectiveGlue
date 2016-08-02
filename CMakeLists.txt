cmake_minimum_required(VERSION 3.5)
project(PerspectiveGlue)

find_package(OpenCV 3.0 REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${OpenCV_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp)
add_executable(PerspectiveGlue ${SOURCE_FILES})

target_link_libraries(PerspectiveGlue ${OpenCV_LIBS})