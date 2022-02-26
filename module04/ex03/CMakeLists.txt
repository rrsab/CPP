cmake_minimum_required(VERSION 3.21)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp AMateria.cpp AMateria.hpp Character.cpp Character.hpp Cure.cpp Cure.hpp Ice.cpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.cpp MateriaSource.hpp)
