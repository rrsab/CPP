#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

private:
	std::string m_name;

public:
	static int	index;
	void		announce();
	void		setName(std::string name);

	Zombie(std::string name);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif