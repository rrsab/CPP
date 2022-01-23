#include "Zombie.hpp"

int main() {

	Zombie *zombie = newZombie("Alpfa");

	randomChump("Sigma");
	zombie->announce();
	delete zombie;
	return (0);
}