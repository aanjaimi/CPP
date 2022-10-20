#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fpn = 0;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    fpn = f.fpn;
}

Fixed &Fixed::operator = (const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fpn = f.fpn;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fpn);
}

void    Fixed::setRawBits(int const raw)
{
    fpn = raw;
}