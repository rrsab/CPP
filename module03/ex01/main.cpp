#include "ScavTrap.hpp"

int	main(void)
{
    std::cout << "________________" << std::endl;
    std::cout << "____ClapTrap____" << std::endl;
    std::cout << "________________" << std::endl;
    ClapTrap	Nikolai("Nikolai");

    Nikolai.attack("Ivan");
    Nikolai.takeDamage(5);
    Nikolai.beRepaired(15);
    std::cout << "________________" << std::endl;
    ClapTrap	Ivan;

    Ivan.attack("Nikolai");
    Ivan.takeDamage(5);
    Ivan.beRepaired(25);
    std::cout << "________________" << std::endl;
    std::cout << "____ScavTrap____" << std::endl;
    std::cout << "________________" << std::endl;
    ScavTrap	Alex("Alex");

    Alex.attack("Ivan");
    Alex.takeDamage(18);
    Alex.beRepaired(40);
    Alex.guardGate();
    std::cout << "________________" << std::endl;
    std::cout << "________________" << std::endl;
    std::cout << "___destructor___" << std::endl;
    std::cout << "________________" << std::endl;
    return 0;
}
