#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &b)
{
    std::cout << "Brain Copy Constructor called" << std::endl;
    *this = b;
}

Brain &Brain::operator = (const Brain &b)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}