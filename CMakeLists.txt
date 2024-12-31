cmake_minimum_required(VERSION 3.10)
project(3D_Letters)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenGL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(GLFW3 REQUIRED glfw3)

include_directories(${GLFW3_INCLUDE_DIRS})
link_directories(${GLFW3_LIBRARY_DIRS})

add_executable(3D_Letters main.cpp)

target_link_libraries(3D_Letters ${GLFW3_LIBRARIES} OpenGL::GL)
