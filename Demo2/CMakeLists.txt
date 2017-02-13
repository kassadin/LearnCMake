cmake_minimum_required(VERSION 3.6)
project(Demo2)

# 多文件添加不方便
# add_executable(Demo2 main.c TestLib.c)

# 查找指定目录下的所有源文件，然后将结果存进指定变量名
aux_source_directory(. DIR_SRCS)
add_executable(Demo2 ${DIR_SRCS})

