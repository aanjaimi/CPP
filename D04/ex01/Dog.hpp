#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, Brain
{
private:
    Brain   *b;
public:
    Dog();
    Dog(const Dog &d);
    Dog &operator = (const Dog &d);
    ~Dog();
    std::string getType() const;
    void        makeSound() const;
};
