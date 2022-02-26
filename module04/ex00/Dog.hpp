#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    virtual ~Dog();
    Dog &operator=(const Dog &D);
    Dog(const Dog &D);
    virtual void makeSound() const;
};


#endif
