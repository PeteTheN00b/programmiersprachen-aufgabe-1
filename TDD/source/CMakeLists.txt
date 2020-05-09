cmake_minimum_required(VERSION 3.17)

project(TDD VERSION 1.0)

add_executable(Aufgabe1-8 aufgabe1-8.cpp)

add_subdirectory(lib/Catch2)
target_link_libraries(Aufgabe1-8 Catch2::Catch2)