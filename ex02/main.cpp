#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "brains adress : " << &brain << "\n";
	std::cout << "adress that stringPTR hold : " << stringPTR << "\n";
	std::cout << "adress that stringREF hold : " << &stringREF << "\n\n";

	std::cout << "brains value of the adress : " << brain << "\n";
	std::cout << "value of the adress that stringPTR hold : " << *stringPTR << "\n";
	std::cout << "value of the adress that stringREF hold : " << stringREF << "\n";
}