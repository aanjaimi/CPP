#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
    
public:
    Dog();
    Dog(const Dog &d);
    Dog &operator = (const Dog &d);
    ~Dog();
    std::string getType() const;
    void        makeSound() const;
};
