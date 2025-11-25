#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
    std::cout <<  z.getName() << " was destroyed ....\n";
}