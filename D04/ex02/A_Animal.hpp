#pragma once

#include <iostream>

class A_Animal
{
protected:
    std::string type;
public:
    A_Animal();
    A_Animal(std::string type);
    A_Animal(const A_Animal &a);
    A_Animal &operator = (const A_Animal &a);
    virtual  ~A_Animal();
    virtual std::string     getType() const;
    virtual void            makeSound() const = 0;
};
