#include "Zombie.hpp"

int main()
{

    Zombie *horde;
    int i;
    horde = zombieHorde(5, "karim");

    for (i = 0; i < 5; i++)
    {
        std::cout << horde[i].getName() << "\n";
    }
    delete [] horde;
    return (0);
}