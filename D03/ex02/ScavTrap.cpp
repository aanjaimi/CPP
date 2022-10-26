#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    Name = "";
    Hit_pt = 100;
    Energy_pt = 50;
    Attack_dm = 20;
}

ScavTrap::ScavTrap(const std::string &n) : ClapTrap(n)
{
    std::cout << "ScavTrap string constructor" << std::endl;
    Name = n;
    Hit_pt = 100;
    Energy_pt = 50;
    Attack_dm = 20;
}

ScavTrap::ScavTrap(const ScavTrap &c) : ClapTrap(c)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &c)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    ClapTrap::operator=(c);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode!!" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (Energy_pt == 0 || Hit_pt == 0)
    {
        std::cout << "ScavTrap can't do anything!!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << Name << "attacks " << target << ", causing " << Attack_dm << " points of damage!" << std::endl;
    Energy_pt--;
}
