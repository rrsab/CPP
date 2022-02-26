#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    Cure(const Cure &C);
    Cure& operator=(const Cure &C);
    virtual AMateria*	clone() const;
    virtual void		use(ICharacter &target);
};

#endif
