cmake_minimum_required(VERSION 3.23)
project(ModernProg C)

set(CMAKE_C_STANDARD 99)

add_executable(ModernProg main.c help_matrix.h matrix.c)
