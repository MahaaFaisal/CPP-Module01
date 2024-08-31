
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

// الف ب
void Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (level.empty())
	{
		std::cout << "complaining about nothing?\n";
		return ;
	}

	int i;
	for (i = 0; (i < 4 && level != levels[i]); i++);

	switch (i)
	{
		case (0):
			debug();
			break;
		case (1):
			info();
			break;
		case(2):
			warning();
			break;
		case(3):
			error();
			break;
		default:
			std::cout << "stop complaining about everything \n";
	}
}