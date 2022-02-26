#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _materias()
{
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        delete _materias[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &M) : _materias()
{
    for (int i = 0; i < 4; ++i)
    {
        _materias[i] = M._materias[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &M)
{
    if (this == &M)
        return (*this);
    for (int i = 0; i < 4; ++i)
    {
        delete _materias[i];
        _materias[i] = M._materias[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *a)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!_materias[i])
        {
            _materias[i] = a;
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (_materias[i] && (_materias[i]->getType() == type))
            return (_materias[i]->clone());
    }
    return (NULL);
}
