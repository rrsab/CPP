#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    ~Ice();
    Ice(const Ice &I);
    Ice& operator=(const Ice &I);
    virtual AMateria*	clone() const;
    virtual void		use(ICharacter &target);
};

#endif