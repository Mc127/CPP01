#include "Zombie.hpp"

int main()
{
    Zombie *z;

    z = newZombie("karim");
    if (!z)
        return (1);
    z->announce();
    randomChump("hamza");
    delete z;
    return (0);
}