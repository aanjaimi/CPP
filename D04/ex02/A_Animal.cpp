#include "A_Animal.hpp"

A_Animal::A_Animal()
{
    std::cout << "A_Animal : Default Constructor called" << std::endl;
    type = "No type";
}

A_Animal::A_Animal(std::string t)
{
    std::cout << "A_Animal : String Constructor called" << std::endl;
    type = t;
}

A_Animal::A_Animal(const A_Animal &a)
{
    std::cout << "A_Animal : Copy Constructor called" << std::endl;
    *this = a;
}

A_Animal &A_Animal::operator = (const A_Animal &a)
{
    std::cout << "A_Animal : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

A_Animal::~A_Animal()
{
    std::cout << "A_Animal : Destructor called" << std::endl;
}

void    A_Animal::makeSound() const
{
    std::cout << "Cats don't bark" << std::endl;
}

std::string A_Animal::getType() const
{
    return (type);
}