#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int	main()
{
    ClapTrap Nikolai("Nikolai");
    ScavTrap Ivan("Ivan");
    FragTrap Max("Max");
    DiamondTrap Denis("Denis");

    Ivan.guardGate();
    Ivan.attack(Nikolai.getMName());
    Nikolai.takeDamage(Ivan.getMAttackDamage());
    Nikolai.beRepaired(Nikolai.getMEnergyPoints());
    Max.highFivesGuys();
    Denis.highFivesGuys();
    Denis.attack(Max.getMName());
    Max.takeDamage(Denis.getMAttackDamage());
    Denis.attack(Ivan.getMName());
    Ivan.takeDamage(Denis.getMAttackDamage());
    Denis.beRepaired(Denis.getMEnergyPoints());
    Denis.whoAmI();
    return (0);
}