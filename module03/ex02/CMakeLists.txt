cmake_minimum_required(VERSION 3.21)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

add_executable(main.cpp ClapTrap.cpp ClapTrap.hpp ScavTrap.cpp ScavTrap.hpp FragTrap.cpp FragTrap.hpp)
