cmake_minimum_required(VERSION 3.6)

aux_source_directory(. DIR_LIB_SRCS)

add_library(MathFunction ${DIR_LIB_SRCS})

target_link_libraries(MathFunction)