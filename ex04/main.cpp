
#include <iostream>
#include <fstream>

void	lineToOstream(std::string line, std::ofstream &outStream, std::string const s1, std::string const s2)
{
	std::size_t oc = line.find(s1, 0);
	std::size_t s1Len = s1.length();

	while (oc != std::string::npos)
	{
		line.erase(oc, s1Len);
		line.insert(oc, s2);
		oc = line.find(s1, oc + 1);
	}
	outStream << line << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "You should pass <filename> <s1> <s2>\n"; 
		return (1);
	}
	std::string const fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	// open filename
	std::ifstream inStream(fileName);
	if (inStream.fail())
	{
		std::cerr << "Failed to open (" << fileName << ")\n"; 
		return (1);
	}

	// open outfile
	std::ofstream outStream ("newOut.txt");
	if (outStream.fail())
	{
		std::cerr << "Failed to open outFile\n"; 
		return (1);
	}

	// copy content to a out file
	std::string line;
	while (getline(inStream, line) && inStream)
		lineToOstream(line, outStream, s1, s2);
}