
#include "HumanA.hpp"

#include <string.h>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name),  _weapon(weapon) {}

HumanA::~HumanA () {}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}