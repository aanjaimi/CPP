#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    std::string type;
public:
    WrongCat();
    WrongCat(const WrongCat &c);
    WrongCat &operator = (const WrongCat &c);
    ~WrongCat();
    std::string getType() const;
};