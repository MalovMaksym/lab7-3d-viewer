cmake_minimum_required(VERSION 3.10)

project(My3DViewer VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(glm CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

add_executable(My3DViewer
    src/main.cpp
)

target_link_libraries(My3DViewer PRIVATE
    glm::glm
    glfw
)
