#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : Default Constructor called" << std::endl;
    for (int i = 0;i < 100;i++)
        ideas[i] = "";
}

Brain::Brain(const Brain &b)
{
    std::cout << "Brain : Copy Constructor called" << std::endl;
    *this = b;
}

Brain &Brain::operator = (const Brain &b)
{
    std::cout << "Brain : Copy assignment operator called" << std::endl;
    for (int i = 0;i < 100;i++)
        ideas[i] = b.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain : Destructor called" << std::endl;
}

std::string Brain::getIdea(int index)
{
    return (ideas[index]);
}

void        Brain::setIdea(int index, std::string idea)
{
    ideas[index] = idea;
}