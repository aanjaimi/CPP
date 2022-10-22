#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fix_point_num = 0;
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl; 
    fix_point_num = value << fra_bits;
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << std::endl;
    fix_point_num = (int)round(value * (float)(1 << fra_bits));
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
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
    return (fix_point_num >> fra_bits);
}

void    Fixed::setRawBits(int const raw)
{
    fix_point_num = raw;
}

int     Fixed::toInt(void) const
{
    return ((int)(fix_point_num >> fra_bits));
}

float     Fixed::toFloat(void) const
{
    return ((float)(fix_point_num / (float)(1 << fra_bits)));
}

std::ostream &operator << (std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return (out);
}