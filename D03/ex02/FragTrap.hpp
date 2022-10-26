#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    
public:
    FragTrap();
    FragTrap(const std::string &n);
    FragTrap(const FragTrap &c);
    FragTrap &operator = (const FragTrap &c);
    ~FragTrap();
    void    attack(const std::string &target);
    void    highFivesGuys();
};
