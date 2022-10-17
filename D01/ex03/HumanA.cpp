#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon &w)
: name(n), weapon(w)
{
    
}

HumanA::~HumanA()
{
    
}