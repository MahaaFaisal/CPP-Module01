
#include <iostream>

int main()
{
	std::string stringVAR= "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << "\n======== ADDRESSES ======\n";

	std::cout << "The memory address of the string variable: " << &stringVAR << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "\n======== VALUES ======\n";

	std::cout << "\nThe value of the string variable: " << stringVAR << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}