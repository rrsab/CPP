#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default constructor called! (Animal)" << std::endl;
    this->_type = "Default";
}

Animal::~Animal() {
    std::cout << "Destructor called! (Animal)" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << "Constructor with a type called! (Animal)" << std::endl;
}

const std::string &Animal::getType() const {
    return _type;
}

Animal::Animal(const Animal &A) : _type(A._type){
    std::cout << "Copy constructor called! (Animal)" << std::endl;
}

Animal &Animal::operator=(const Animal &A) {
    std::cout << "Assigned operation called! (Animal)" << std::endl;
    this->_type = A._type;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Make sound..." << std::endl;
}

void Animal::getAddr() const {
    std::cout << this << std::endl;
}


