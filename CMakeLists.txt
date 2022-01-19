cmake_minimum_required(VERSION 3.20)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

#add_executable(ex00 module00/ex00/megaphone.cpp)
add_executable(ex00 module00/ex01/Contact.cpp
		            module00/ex01/main.cpp
            		module00/ex01/PhoneBook.cpp)
