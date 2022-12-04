cmake_minimum_required(VERSION 3.23)
project(Composite)

set(CMAKE_CXX_STANDARD 17)

add_executable(Composite main.cpp Graphic.h Line.h Rectangle.h Text.h Picture.h)
