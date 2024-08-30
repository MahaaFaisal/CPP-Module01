
#include "Zombie.hpp"

int	main()
{
	int	N = 20;
	std::cout << "\n======== creating a horde of zombies ======\n";
	Zombie *horde = zombieHorde(N, "Maha");
	
	std::cout << "\n======== Calling announce ======\n";
	for (int i = 0; i < N; i++)
		horde[i].announce();
	std::cout << "\n======== Deleting zombies ======\n";
	delete [] horde;
	std::cout << "\n======== Zombies died ======\n";
}