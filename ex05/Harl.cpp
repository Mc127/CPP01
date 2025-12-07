#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{   
    Harl karim;
	void (Harl::*ptr[4])();

    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;

    int i;
    i = 0;

    std::string arr[4] = {"debug", "info", "warning", "error"};
    while (level != arr[i])
    {
        i++;
        if (i > 3)
        {
            std::cout << "Complaining level not found\n";
            return ;
        }
    }
    (karim.*ptr[i])();
}