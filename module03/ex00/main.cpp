#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap	Nikolai("Nikolai");
    ClapTrap	Ivan("Ivan");
    Nikolai.attack("Ivan");
    Nikolai.takeDamage(5);
    Nikolai.beRepaired(10);
    Ivan.attack("Nikolai");
    Ivan.takeDamage(42);
    Ivan.beRepaired(21);
    std::cout << "ClapTrap " << Ivan.getMName()
                << " has hitpoints: "
                << Ivan.getMHitPoints() << std::endl;
    std::cout << "ClapTrap " << Nikolai.getMName()
              << " has hitpoints: "
              << Nikolai.getMHitPoints() << std::endl;
}
