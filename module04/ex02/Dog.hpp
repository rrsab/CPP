#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal {
private:
    Brain *_brain;
public:
    Dog();
    virtual ~Dog();
    Dog &operator=(const Dog &D);
    Dog(const Dog &D);
    virtual void makeSound() const;
    virtual void getAddr() const;
};


#endif
