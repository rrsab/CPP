#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(const std::string &type);
    virtual ~Animal();
    Animal(const Animal &A);
    Animal &operator=(const Animal &A);
    const std::string &getType() const;
    virtual void    makeSound() const;
    void 	    	getAddr() const;
};


#endif
