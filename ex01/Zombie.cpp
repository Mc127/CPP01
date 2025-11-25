#include "Zombie.hpp"

Zombie::Zombie(std::string name)
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