#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their hands" << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}

HumanB::~HumanB(void) {}