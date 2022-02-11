#include "FragTrap.hpp"

int	main()
{
    std::cout << "________________" << std::endl;
    std::cout << "____ClapTrap____" << std::endl;
    std::cout << "________________" << std::endl;
    ClapTrap robot_1("Alex");
    robot_1.attack("Bill");
    robot_1.takeDamage(10);
    robot_1.beRepaired(15);
    std::cout << "________________" << std::endl;
    ClapTrap robot_2 = robot_1;
    robot_2.attack("Bill");
    robot_2.takeDamage(42);
    robot_2.beRepaired(21);
    std::cout << "________________" << std::endl;
    std::cout << "____ScavTrap____" << std::endl;
    std::cout << "________________" << std::endl;
    ScavTrap robot_3("May");
    robot_3.attack("Bill");
    robot_3.takeDamage(18);
    robot_3.beRepaired(40);
    robot_3.guardGate();
    std::cout << "________________" << std::endl;
    ScavTrap robot_4 = robot_3;
    robot_4.attack("Bill");
    robot_4.takeDamage(707);
    robot_4.beRepaired(0);
    robot_4.guardGate();
    std::cout << "________________" << std::endl;
    std::cout << "____FlagTrap____" << std::endl;
    std::cout << "________________" << std::endl;
    FragTrap robot_5("Sam");
    robot_5.attack("Bill");
    robot_5.takeDamage(18);
    robot_5.beRepaired(40);
    robot_5.highFivesGuys();
    std::cout << "________________" << std::endl;
    FragTrap robot_6 = robot_5;
    robot_6.attack("Bill");
    robot_6.takeDamage(1);
    robot_6.beRepaired(1024);
    robot_6.highFivesGuys();
    std::cout << "________________" << std::endl;
    std::cout << "___destructor___" << std::endl;
    std::cout << "________________" << std::endl;
    return (0);
}