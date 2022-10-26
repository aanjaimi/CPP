#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    
public:
    ScavTrap();
    ScavTrap(const std::string &n);
    ScavTrap(const ScavTrap &c);
    ScavTrap &operator = (const ScavTrap &c);
    ~ScavTrap();
    void    attack(const std::string &target);
    void    guardGate();
};
