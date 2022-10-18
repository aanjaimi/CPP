#include "Harl.hpp"

void    msg()
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

// int set_level(std::string level)
// {
//     if (level = "debug")
// }

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
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

    for (int i = 0;i < 4;i++)
    {
        if (in[i] == level)
        {
            std::cout << "[ " << level << " ]" << std::endl;
            (this->*funcs[i])();
            return ;
        }
    }
    std::cout << "Wrong command!!" << std::endl;
}

Harl::Harl()
{

}

Harl::~Harl()
{
    
}