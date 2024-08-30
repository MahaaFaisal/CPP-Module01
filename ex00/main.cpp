
#include "Zombie.hpp"

int	main()
{
	std::cout << "\n======== stack zombie ======\n";
	Zombie stackZombie ("Maha");
	stackZombie.announce();

	std::cout << "\n======== another stack zombie ======\n";
	randomChump("Sara");
	std::cout << "\n========= heap zombie ======\n";
	Zombie *heapZombie = newZombie("Ola");
	heapZombie->announce();
	std::cout << std::endl;
	delete	heapZombie;
}