#include "Character.hpp"

Character::Character() : _name("HZ"),
                         _inventory()
{
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete _inventory[i];
    }
}

Character::Character(const Character &C): _name(C._name),
                                          _inventory()
{
    for (int i = 0; i < 4; ++i)
    {
        _inventory[i] = C._inventory[i]->clone();
    }
}

Character& Character::operator=(const Character &C)
{
    if (this == &C)
        return (*this);
    _name = C._name;
    for (int i = 0; i < 4; ++i)
    {
        delete _inventory[i];
        _inventory[i] = C._inventory[i]->clone();
    }
    return (*this);
}

Character::Character(std::string name): _name(name)
{
}

void Character::equip(AMateria *m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; ++i)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3 || !_inventory[idx])
        return ;
    _inventory[idx]->use(target);
}

const std::string &Character::getName() const
{
    return _name;
}
