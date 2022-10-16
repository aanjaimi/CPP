#pragma once

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void    set_zombie(std::string n);
    void    announce();
};

Zombie  *zombieHorde(int N, std::string name);