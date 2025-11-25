#include "Zombie.hpp"

int main()
{

    Zombie *horde;
    int i;
    horde = zombieHorde(100, "zombie");

    for (i = 0; i < 100; i++)
    {
        std::cout << horde[i].getName() << "\n";
    }
    delete [] horde;
    return (0);
}