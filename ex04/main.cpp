
#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac < 4)
	{
		std::cout << "ooops too many argument\n";
		return 1;
	}
	std::string fileName;
	std::string newfile;
	std::string S1;
	std::string S2;
	std::string line;

	fileName = av[1];
	S1 = av[2];
	S2 = av[3];

	std::ifstream file(fileName.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error accuring while oppening the file\n";
		return (1);
	}

	newfile = fileName + ".replace";

	std::ofstream filereplace(newfile.c_str());
	if (!filereplace.is_open())
	{
		std::cerr << "Error accuring while oppening the filereplace\n";
		return (1);
	}
	size_t s_lingh = S1.length();
	ssize_t pos;
	ssize_t idx = 0;
	while (std::getline(file, line))
	{
		pos = 0;
		while (pos != -1)
		{
			pos = line.find(S1, pos);
			if (pos != -1)
			{
				line.erase(pos, s_lingh);
				line.insert(pos, S2);
				pos += S2.length();
			}
		}
		idx++;
		if (idx > 1)
			filereplace << "\n";
		filereplace << line;
	}
	if (line == "")
		filereplace << "\n";
	return 0;
}
