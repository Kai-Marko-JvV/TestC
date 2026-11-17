cmake_minimum_required(VERSION 3.16)
project(TestC)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES "src/*.c" "src/*.cpp")
add_executable(main ${SOURCES})

include_directories(include)

target_link_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(main PRIVATE raylib opengl32 gdi32 winmm)