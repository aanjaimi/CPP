#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat : Default Constructor called" << std::endl;
    b = new Brain();
}

Cat::Cat(const Cat &c) : Animal(c)
{
    std::cout << "Cat : Copy Constructor called" << std::endl;
    b = new Brain();
}

Cat &Cat::operator = (const Cat &a)
{
    std::cout << "Cat : Copy assignment operator called" << std::endl;
    Animal::operator=(a);
    return (*this);
}

Cat::~Cat()
{
    delete b;
    std::cout << "Cat : Destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}
