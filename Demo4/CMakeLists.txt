cmake_minimum_required(VERSION 3.6)
project(Demo4)

# 加入一个配置头文件 config.h ，这个文件由 CMake 从 config.h.in 生成
configure_file("${PROJECT_SOURCE_DIR}/config.h.in"
        "${PROJECT_SOURCE_DIR}/config.h")

option(USE_MYMATH "use my math" ON)

if (USE_MYMATH)
    include_directories ("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory (math)
    set (EXTRA_LIBS ${EXTRA_LIBS} MathFunction)
endif (USE_MYMATH)

aux_source_directory(. DIR_SRCS)

add_executable(Demo4 ${DIR_SRCS})

target_link_libraries (Demo4 ${EXTRA_LIBS})