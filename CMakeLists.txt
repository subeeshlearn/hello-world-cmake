cmake_minimum_required(VERSION 3.16)

project(main)

add_executable(main main.cpp)
add_executable(hello hello.cpp)

install(TARGETS main)
install(TARGETS hello)

enable_testing()
add_test(NAME main COMMAND main)
