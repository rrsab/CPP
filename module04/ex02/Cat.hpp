#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
private:
    Brain   *_brain;
public:
    Cat();
    virtual ~Cat();
    Cat &operator=(const Cat &C);
    Cat(const Cat &C);

    virtual void makeSound() const;
    virtual void getAddr() const;
};


#endif
