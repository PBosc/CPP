#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Default constructor has been called." << std::endl;	
}

Zombie::Zombie(std::string desired_name)
{
	std::cout << desired_name << " - String constructor called" << std::endl;
	_name = desired_name;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " - Destructor called" << std::endl;
}