cmake_minimum_required(VERSION 3.17)

project(TDD VERSION 1.0)

add_executable(Aufgabe1-8 aufgabe1-8.cpp)
add_executable(Aufgabe1-9 aufgabe1-9.cpp)
add_executable(Aufgabe1-10 aufgabe1-10.cpp)
add_executable(Aufgabe1-11 aufgabe1-11.cpp)

add_subdirectory(lib/Catch2)
target_link_libraries(Aufgabe1-8 Catch2::Catch2)
target_link_libraries(Aufgabe1-9 Catch2::Catch2)
target_link_libraries(Aufgabe1-10 Catch2::Catch2)
target_link_libraries(Aufgabe1-11 Catch2::Catch2)