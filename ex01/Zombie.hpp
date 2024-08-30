
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie (std::string name);
		Zombie ();
		~Zombie ();

		void	announce();
		void	set_name(std::string const name);
};

Zombie*    zombieHorde( int N, std::string name );

#endif