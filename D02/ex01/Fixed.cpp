#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fpn = 0;
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl; 
    fpn = value << nf;
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << std::endl;
    fpn = (int)round(value * (float)(1 << nf));
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
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
    return (fpn >> nf);
}

void    Fixed::setRawBits(int const raw)
{
    fpn = raw;
}

int     Fixed::toInt(void) const
{
    return ((int)(fpn >> nf));
}

float     Fixed::toFloat(void) const
{
    float   f;
    f = (float)(fpn / (float)(1 << nf));
    return (f);
}

std::ostream &operator << (std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return (out);
}