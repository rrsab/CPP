#include "Zombie.hpp"

Zombie::Zombie(const std::string name): m_name(name) {
	std::cout << "Zombie " << m_name << " rebelled!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << m_name << " zombie died" << std::endl;
}

void Zombie::announce() {
	std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


