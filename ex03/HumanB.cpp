
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB () {}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their ";
	if (!_weapon)
		std::cout << "hands\n";
	else
		std::cout << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}