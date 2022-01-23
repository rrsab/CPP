#include "Zombie.hpp"

int Zombie::index(1);

Zombie::Zombie(std::string name) {
	std::cout << "Zombie " << m_name << " rebelled!" << std::endl;
}

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << m_name << " zombie died" << std::endl;
}

void Zombie::setName(std::string name)
{
	m_name = name + std::to_string(index);
	std::cout << "Zombie " << m_name << " rebelled!" << std::endl;
	index++;
}

void	Zombie::announce() {
	std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


