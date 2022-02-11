#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
private:

public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &S);
    ScavTrap& operator=(const ScavTrap &S);
    ScavTrap(std::string name);

    void	attack(const std::string &target);
    void	guardGate();
};


#endif
