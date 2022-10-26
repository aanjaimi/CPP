#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
    Name = "";
    Hit_pt = 100;
    Energy_pt = 100;
    Attack_dm = 30;
}

FragTrap::FragTrap(const std::string &n) : ClapTrap(n)
{
    std::cout << "FragTrap string constructor" << std::endl;
    Name = n;
    Hit_pt = 100;
    Energy_pt = 100;
    Attack_dm = 30;
}

FragTrap::FragTrap(const FragTrap &c) : ClapTrap(c)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &c)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    ClapTrap::operator=(c);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "High five ✋" << std::endl;
}

void    FragTrap::attack(const std::string &target)
{
    if (Energy_pt == 0 || Hit_pt == 0)
    {
        std::cout << "FragTrap can't do anything!!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << Name << "attacks " << target << ", causing " << Attack_dm << " points of damage!" << std::endl;
    Energy_pt--;
}
