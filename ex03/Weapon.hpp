#ifndef WEAPON_H
# define WEAPON_H

#include <string.h>
#include <iostream>

class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon (std::string type);
		Weapon ();
		~Weapon ();
		void setType(std::string const type);
		std::string const getType();
};

#endif