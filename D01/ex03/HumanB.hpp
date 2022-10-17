#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *weapon;
public:
    void    attack();
    void    setWeapon(Weapon &w);
    HumanB(std::string n);
    ~HumanB();
};
