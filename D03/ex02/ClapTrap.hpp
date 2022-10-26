#pragma once

#include <iostream>

class ClapTrap
{
protected:
    std::string Name;
    int         Hit_pt;
    int         Energy_pt;
    int         Attack_dm;
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap &c);
    ClapTrap    &operator = (const ClapTrap &c);
    virtual ~ClapTrap();
    virtual void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};
