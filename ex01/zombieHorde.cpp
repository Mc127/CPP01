#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *z;
    int i;

    z = new (std::nothrow) Zombie[N];
    if (!z)
    {
        std::cerr << "allocation fails \n";
        return (NULL);
    }
    for (i = 0; i < N; i++)
    {
        z[i].setName(name);
    }
    return (z);
}
