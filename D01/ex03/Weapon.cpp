#include "Weapon.hpp"

const std::string&  Weapon::getType()
{
    const std::string &ref = type;
    return (ref);
}

Weapon::Weapon()
{

}

void    Weapon::setType(std::string t)
{
    type = t;
}

Weapon::Weapon(std::string t)
{
    type = t;
}

Weapon::~Weapon()
{
    
}