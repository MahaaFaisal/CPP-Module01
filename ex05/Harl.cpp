
#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
	std::cout << "debugging message\n";
}
void Harl::info( void )
{
	std::cout << "info message\n";
}
void Harl::warning( void )
{
	std::cout << "warning message\n";
}
void Harl::error( void )
{
	std::cout << "error message\n";
}

void Harl::complain( std::string level )
{
	if (level.empty())
	{
		std::cout << "complaining about nothing?\n";
		return ;
	}
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	typedef void(Harl::*pointers) ();
	pointers funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i;
	for (i = 0; (i < 4 && level != levels[i]); i++);
	if (i < 4)
		(this->*funcs[i])();
	else
		std::cout << "stop complaining about everything \n";
}