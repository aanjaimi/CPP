#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
    
public:
    Cat();
    Cat(const Cat &c);
    Cat &operator = (const Cat &c);
    ~Cat();
    std::string getType() const;
    void        makeSound() const;
};
