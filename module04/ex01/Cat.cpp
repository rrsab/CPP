#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
    std::cout << "Default constructor called! (Cat)" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor called! (Cat)" << std::endl;
    delete _brain;
}

void Cat::makeSound() const {
    std::cout << "Make sound: I'm a cat!" << std::endl;
}

Cat &Cat::operator=(const Cat &C) {
    std::cout << "Assigned operation called! (Cat)" << std::endl;
    this->_type = C._type;
    return *this;
}

Cat::Cat(const Cat &C) : Animal(C._type), _brain(new Brain(*C._brain)) {
    std::cout << "Copy constructor called! (Cat)" << std::endl;
}
