cmake_minimum_required(VERSION 3.21)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.cpp Form.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp Intern.cpp Intern.hpp)
