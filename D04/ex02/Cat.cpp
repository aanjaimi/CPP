#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : A_Animal("Cat")
{
    std::cout << "Cat : Default Constructor called" << std::endl;
    // b = new Brain();
}

Cat::Cat(const Cat &c) : A_Animal(c)
{
    std::cout << "Cat : Copy Constructor called" << std::endl;
    b = new Brain(*c.b);
}

Cat &Cat::operator = (const Cat &c)
{
    std::cout << "Cat : Copy assignment operator called" << std::endl;
    if (this != &c)
    {
        this->~Cat();
        A_Animal::operator=(c);
        b = new Brain(*c.b);
    }
    return (*this);
}

Cat::~Cat()
{
    // delete b;
    std::cout << "Cat : Destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

Brain   const Cat::getBrain()
{
    return (*b);
}
