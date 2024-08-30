
#include "Weapon.hpp"

Weapon::Weapon () {}

Weapon::Weapon (std::string type) 
{
	_type = type;
}
Weapon::~Weapon () {}

void Weapon::setType(std::string const type)
{
	_type = type;
}

std::string const Weapon::getType ()
{
	return (_type);
}
