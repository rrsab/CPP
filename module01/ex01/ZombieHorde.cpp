#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *hordeZombie;
	if (N > 0)
	{
		hordeZombie = new Zombie[N];
		for (int i = 0; i < N; ++i)
		{
			hordeZombie[i].setName(name);
		}
		return hordeZombie;
	}
	return NULL;
}