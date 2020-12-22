cmake_minimum_required(VERSION 3.17)
project(AES C)

set(CMAKE_C_STANDARD 99)

add_executable(AES main.c aes.c aes.h)