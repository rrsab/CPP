cmake_minimum_required(VERSION 3.21)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
        HumanA.hpp
        HumanB.hpp
        Weapon.hpp)
