#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain   *b;
public:
    Cat();
    Cat(const Cat &c);
    Cat &operator = (const Cat &c);
    ~Cat();
    void        makeSound() const;
};
