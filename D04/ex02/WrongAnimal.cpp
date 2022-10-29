#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    type = "No type";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = a;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &a)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    type = a.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Cats don’t bark" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}