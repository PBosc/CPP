#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie *my_zombie = newZombie("Bob");

	if (my_zombie == NULL)
		return (1);
	my_zombie->announce();
	delete my_zombie;
	randomChump("John");
	return (0);
}