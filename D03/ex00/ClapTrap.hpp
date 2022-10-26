#pragma once

#include <iostream>

class ClapTrap
{
private:
    std::string Name;
    int         Hit_pt;
    int         Energy_pt;
    int         Attack_dm;
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap &c);
    ClapTrap    &operator = (const ClapTrap &c);
    ~ClapTrap();
    int     getHitPt();
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};
