#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_materias[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &M);
    MateriaSource& operator=(const MateriaSource &M);
    virtual void learnMateria(AMateria* a);
    virtual AMateria* createMateria(std::string const & type);
};


#endif