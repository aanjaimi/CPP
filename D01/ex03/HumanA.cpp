#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon w)
: weapon(w)
{
    name = n;
}

HumanA::~HumanA()
{
    
}