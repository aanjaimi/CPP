#include "Harl.hpp"

void    msg()
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl << "I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    for(unsigned long i = 0;i < level.length();i++)
        level[i] = (char)toupper(level[i]);
    
    std::string in[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };

    void    (Harl::*funcs[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    int j = -1;
    for (int i = 0;i < 4;i++)
    {
        if (in[i] == level)
        {
            j = i;
            break ;
        }
    }
    switch(j)
    {
        case 0:
            (this->*funcs[0])();
            break ;
        case 1:
            (this->*funcs[1])();
            break ;
        case 2:
            (this->*funcs[2])();
            break ;
        case 3:
            (this->*funcs[3])();
            break ;
        default:
            msg();
            break ;
    }  
}

Harl::Harl()
{

}

Harl::~Harl()
{
    
}