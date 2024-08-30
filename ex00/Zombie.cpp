
#include "Zombie.hpp"

Zombie::Zombie (std::string name)
{
	this->_name = name;
}

Zombie::~Zombie ()
{
	std::cout << " Not enough brains! " << _name << " died 💀 \n";
}

void Zombie::announce ()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}