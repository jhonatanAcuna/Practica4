cmake_minimum_required(VERSION 3.16)
project(Habitantes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Habitantes main.cpp Departamentos.cpp Departamentos.h Piso.cpp Piso.h Torre.cpp Torre.h Complejo.cpp Complejo.h)