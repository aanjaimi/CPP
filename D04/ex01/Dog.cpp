#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog : Default Constructor called" << std::endl;
    b = new Brain();
}

Dog::Dog(const Dog &d) : Animal(d)
{
    std::cout << "Dog : Copy Constructor called" << std::endl;
    b = new Brain();
}

Dog &Dog::operator = (const Dog &a)
{
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    Animal::operator=(a);
    return (*this);
}

Dog::~Dog()
{
    delete b;
    std::cout << "Dog : Destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "How How" << std::endl;
}
