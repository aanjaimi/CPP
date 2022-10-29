#pragma once

#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
private:
    Brain   *b;
public:
    Cat();
    Cat(const Cat &c);
    Cat &operator = (const Cat &c);
    ~Cat();
    void        makeSound() const;
    Brain const getBrain();
};
