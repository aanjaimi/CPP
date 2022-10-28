#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal : Default Constructor called" << std::endl;
    type = "No type";
}

Animal::Animal(std::string t)
{
    std::cout << "Animal : String Constructor called" << std::endl;
    type = t;
}

Animal::Animal(const Animal &a)
{
    std::cout << "Animal : Copy Constructor called" << std::endl;
    *this = a;
}

Animal &Animal::operator = (const Animal &a)
{
    std::cout << "Animal : Copy assignment operator called" << std::endl;
    this->type = a.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal : Destructor called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "Cats don't bark" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}