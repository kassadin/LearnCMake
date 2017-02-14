cmake_minimum_required(VERSION 3.6)
project(Demo3)

set(CMAKE_C_STANDARD 99)

aux_source_directory(. SOURCE_FILES)

add_subdirectory(math)
add_executable(Demo3 main.c)

target_link_libraries(Demo3 MathFunction)