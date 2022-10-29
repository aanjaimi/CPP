#pragma once

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &a);
    WrongAnimal &operator = (const WrongAnimal &a);
    ~WrongAnimal();
    virtual std::string     getType() const;
    void                    makeSound() const;
};
