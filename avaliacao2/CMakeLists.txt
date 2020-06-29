cmake_minimum_required(VERSION 3.16)
project(avaliacao2)

set(CMAKE_CXX_STANDARD 11)

add_executable(avaliacao2 src/main.cpp include/date.h include/time.h include/message.h include/app.h include/diary.h src/app.cpp src/diary.cpp src/date.cpp src/time.cpp)