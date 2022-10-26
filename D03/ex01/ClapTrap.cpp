#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    Hit_pt = 10;
    Energy_pt = 10;
    Attack_dm = 0;
}

ClapTrap::ClapTrap(std::string n)
{
    std::cout << "ClapTrap String Constructor called" << std::endl;
    Name = n;
    Hit_pt = 10;
    Energy_pt = 10;
    Attack_dm = 0;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = c;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &c)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    this->Hit_pt = c.Hit_pt;
    this->Attack_dm = c.Attack_dm;
    this->Energy_pt = c.Energy_pt;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

int     ClapTrap::getHitPt()
{
    return (Hit_pt);
}

void    ClapTrap::attack(const std::string &target)
{
    if (Energy_pt == 0 || Hit_pt == 0)
    {
        std::cout << "ClapTrap can't do anything!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << "attacks " << target << ", causing " << Attack_dm << " points of damage!" << std::endl;
    Energy_pt--;

}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Energy_pt == 0 || Hit_pt == 0)
    {
        std::cout << "ClapTrap can't do anything!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name  << "taken a " << amount << " points of damage!" << std::endl;
    Hit_pt -= amount;
    if (Hit_pt < 0)
        Hit_pt = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_pt == 0 || Hit_pt == 0)
    {
        std::cout << "ClapTrap can't do anything!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << "repairs itself by " << amount  << " points!" << std::endl;
    Hit_pt += amount;
    Energy_pt--;
}