#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP


#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string m_name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &D);
    DiamondTrap& operator=(const DiamondTrap &D);

    void	attack(std::string const &target);
    void	whoAmI(void);
};


#endif
