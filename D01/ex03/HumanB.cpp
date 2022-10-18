#include "HumanB.hpp"

void    HumanB::attack()
{
    if (!weapon)
        std::cout << "There's no weapon to attack" << std::endl;
    else
        std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

HumanB::HumanB(std::string n) : weapon(NULL)
{
    name = n;
}

HumanB::~HumanB()
{
    
}