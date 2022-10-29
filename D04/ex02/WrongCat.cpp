#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &a)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = a;
}

WrongCat &WrongCat::operator = (const WrongCat &a)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    type = a.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

std::string WrongCat::getType() const
{
    return (type);
}