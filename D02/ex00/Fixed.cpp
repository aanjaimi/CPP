#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fix_point_num = 0;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    fix_point_num = f.fix_point_num;
}

Fixed &Fixed::operator = (const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fix_point_num = f.fix_point_num;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fix_point_num);
}

void    Fixed::setRawBits(int const raw)
{
    fix_point_num = raw;
}