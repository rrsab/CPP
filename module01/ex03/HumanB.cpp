#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_weapon(nullptr), m_name(name)
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
		std::cout << m_name << "attack with his hands";
	std::cout << std::endl;
}