cmake_minimum_required(VERSION 3.10)

project(KALK VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} KALK.cpp)

add_subdirectory(lib)
target_link_libraries(${PROJECT_NAME} lib)