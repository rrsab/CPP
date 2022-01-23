#include "Zombie.hpp"

int main()
{
	int N = 0;
	std::cout << "How many zombies do you want to create > ";
	std::cin >> N;
	Zombie *ptrZombie = zombieHorde(N, "Badi");
	for (int i = 0; i < N; ++i)
	{
		ptrZombie[i].announce();
	}
	delete[] ptrZombie;
	return (0);
}