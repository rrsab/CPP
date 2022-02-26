#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice &I) : AMateria(I._type)
{

}

Ice &Ice::operator=(const Ice &I)
{
    if (this == &I)
        return (*this);
    return (*this);
}

AMateria *Ice::clone() const
{
//	AMateria *clone = new Ice(*this);
//	return clone;
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout	<<	"* shoots an ice bolt at "	<<	target.getName()
                 <<			" *"				<<	std::endl;
}
