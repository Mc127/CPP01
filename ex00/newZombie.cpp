#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *z;

    z = new(std::nothrow) Zombie(name);
    if (!z)
    {
        std::cerr << "allocation fails \n";
        return (NULL);
    }
    return (z);
}