cmake_minimum_required(VERSION 3.21)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 main.cpp Animal.cpp Animal.hpp Cat.cpp Cat.hpp Dog.cpp Dog.hpp WrongCat.cpp WrongCat.hpp WrongAnimal.cpp WrongAnimal.hpp)
