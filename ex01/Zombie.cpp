#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName()
{
	return (name);
}

void Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ...\n";
}