#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal(), Brain()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    type = "Dog";
    b = new Brain();
}

Dog::Dog(const Dog &a)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = a;
}

Dog &Dog::operator = (const Dog &a)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    type = a.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete b;
}

void    Dog::makeSound() const
{
    std::cout << "How How" << std::endl;
}

std::string Dog::getType() const
{
    return (type);
}