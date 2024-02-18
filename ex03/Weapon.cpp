#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) {}

const std::string& Weapon::getType() const
{
	const std::string& string_ref = this->_type;
	return string_ref;
}

void Weapon::setType(const std::string& new_type)
{
	this->_type = new_type;
}

Weapon::~Weapon (void) {}