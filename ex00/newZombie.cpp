
# include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *foo = new Zombie (name);
	return (foo);
}