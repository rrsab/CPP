#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &F);
    FragTrap& operator=(const FragTrap &F);
    FragTrap(std::string name);
    void highFivesGuys(void);
};


#endif
