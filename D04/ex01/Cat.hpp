#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal , Brain
{
private:
    Brain   *b;
public:
    Cat();
    Cat(const Cat &c);
    Cat &operator = (const Cat &c);
    ~Cat();
    std::string getType() const;
    void        makeSound() const;
};
