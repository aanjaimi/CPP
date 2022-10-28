#pragma once

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &a);
    Animal &operator = (const Animal &a);
    virtual  ~Animal();
    virtual std::string     getType() const;
    virtual void            makeSound() const;
};
