#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	if (!zombie)
	{
		std::cout << "Failed allocation" << std::endl;
		return (NULL);
	}
	return (zombie);	
}