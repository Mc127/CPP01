#include "Zombie.hpp"
#include "Zombie.h"


Zombie::Zombie(std::string name)
{
	this->name = name;
}
void Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ...\n";
}
Zombie::~Zombie()
{
	std::cout << this->name << " was destroyed ....\n";
}
