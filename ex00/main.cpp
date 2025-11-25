#include "Zombie.hpp"
#include "Zombie.h"

void destroy(Zombie *z)
{
    std::cout <<  z->getName() << " was destroyed ....\n";
    delete z;
}

int main()
{
    Zombie *z;

    z = newZombie("karim");
    if (!z)
        return (1);
    z->announce();
    randomChump("hamza");
    destroy(z);

    return (0);
}