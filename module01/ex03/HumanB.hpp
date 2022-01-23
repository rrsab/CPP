#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	m_name;
	Weapon*		m_weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& weapon);
	void	attack();
};

#endif
