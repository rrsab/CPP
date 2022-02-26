#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &WC);
    virtual ~WrongCat();

    WrongCat &operator=(const WrongCat &WC);
    void makeSound() const;
};


#endif
