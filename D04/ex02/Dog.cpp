#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : A_Animal("Dog")
{
    std::cout << "Dog : Default Constructor called" << std::endl;
    // b = new Brain();
}

Dog::Dog(const Dog &d) : A_Animal(d)
{
    std::cout << "Dog : Copy Constructor called" << std::endl;
    b = new Brain(*d.b);
}

Dog &Dog::operator = (const Dog &d)
{
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    if (this != &d)
    {
        this->~Dog();
        A_Animal::operator=(d);
        b = new Brain(*d.b);
    }
    return (*this);
}

Dog::~Dog()
{
    // delete b;
    std::cout << "Dog : Destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "How How" << std::endl;
}

Brain   const Dog::getBrain()
{
    return (*b);
}