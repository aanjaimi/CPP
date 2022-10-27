#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &a)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = a;
}

Cat &Cat::operator = (const Cat &a)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    type = a.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meo Meo" << std::endl;
}

std::string Cat::getType() const
{
    return (type);
}