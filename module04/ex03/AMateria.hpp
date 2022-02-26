#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string	_type;
public:
    AMateria();
    virtual ~AMateria();
    AMateria& operator=(const AMateria &AM);
    AMateria(const AMateria &AM);
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};


#endif