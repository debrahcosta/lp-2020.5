cmake_minimum_required(VERSION 3.16)
project(aula7)

set(CMAKE_CXX_STANDARD 11)

add_executable(aula7 src/main.cpp include/date.h include/time.h include/message.h include/app.h include/diary.h src/app.cpp src/diary.cpp)