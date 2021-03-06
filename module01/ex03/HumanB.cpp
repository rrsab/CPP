#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_name(name), m_weapon(NULL)
{}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}

void	HumanB::attack()
{
	if (m_weapon)
		std::cout << m_name << " attack with his " << m_weapon->getType();
	else
		std::cout << m_name << " attack with his hands";
	std::cout << std::endl;
}