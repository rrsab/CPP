#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name),
													m_weapon(weapon)
{}

HumanA::HumanA()
{}

void	HumanA::attack()
{
	std::cout << m_name << " attacks with his " << m_weapon.getType();
	std::cout << std::endl;
}