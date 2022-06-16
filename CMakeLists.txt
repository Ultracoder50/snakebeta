cmake_minimum_required(VERSION 3.22)
project(Ncurses_C___Gui)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ncurses_C___Gui main.cpp src/base.hpp src/game.hpp src/drawable.hpp)
