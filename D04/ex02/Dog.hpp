#pragma once

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
private:
    Brain   *b;
public:
    Dog();
    Dog(const Dog &d);
    Dog &operator = (const Dog &d);
    ~Dog();
    void            makeSound() const;
    Brain   const   getBrain();
};
