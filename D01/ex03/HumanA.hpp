#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon      &weapon;
public:
    void    attack();
    HumanA(std::string n, Weapon w);
    ~HumanA();
};
