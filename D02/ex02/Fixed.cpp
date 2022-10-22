#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    fix_point_num = 0;
}

Fixed::Fixed(int value)
{
    // std::cout << "Int constructor called" << std::endl;
    // std::cout << "fb : " << fra_bits << std::endl << "fpn : " << fix_point_num << std::endl;
    fix_point_num = value << fra_bits;
    // std::cout << fix_point_num << std::endl;
    // std::cout << "-------------------------------\n";
}

Fixed::Fixed(float value)
{
    // std::cout << "Float constructor called" << std::endl;
    // std::cout << "fb : " << fra_bits << std::endl << "fpn : " << fix_point_num << std::endl; 
    fix_point_num = (int)round(value * (float)(1 << fra_bits));
    // std::cout << fix_point_num << std::endl;
    // std::cout << "-------------------------------\n";
}

Fixed::Fixed(const Fixed &f)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed &Fixed::operator = (const Fixed &f)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->fix_point_num = f.fix_point_num;
    return (*this);
}

bool    Fixed::operator > (const Fixed &f)
{
    return (this->fix_point_num > f.fix_point_num);
}

bool    Fixed::operator < (const Fixed &f)
{
    return (this->fix_point_num < f.fix_point_num);
}

bool    Fixed::operator >= (const Fixed &f)
{
    return (this->fix_point_num >= f.fix_point_num);
}

bool    Fixed::operator <= (const Fixed &f)
{
    return (this->fix_point_num <= f.fix_point_num);
}

bool    Fixed::operator == (const Fixed &f)
{
    return (this->fix_point_num == f.fix_point_num);
}

bool    Fixed::operator != (const Fixed &f)
{
    return (this->fix_point_num != f.fix_point_num);
}

Fixed   Fixed::operator + (const Fixed &f)
{
    Fixed   res;

    res.setRawBits(this->fix_point_num + f.fix_point_num);
    return (res);
}

Fixed   Fixed::operator - (const Fixed &f)
{
    Fixed   res;

    res.setRawBits(this->fix_point_num - f.fix_point_num);
    return (res);
}

Fixed   Fixed::operator * (const Fixed &f)
{
    Fixed   res;

    res.fix_point_num = this->fix_point_num * f.getRawBits();
    return (res);
}

Fixed   Fixed::operator / (const Fixed &f)
{
    Fixed   res;

    res.setRawBits(this->fix_point_num / f.fix_point_num);
    return (res);
}

Fixed   &Fixed::operator ++ (void)
{
    this->fix_point_num += 1;
    return (*this);
}

Fixed   Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    this->fix_point_num += 1;
    return (tmp);
}

Fixed   &Fixed::operator -- (void)
{
    this->fix_point_num -= 1;
    return (*this);
}

Fixed   Fixed::operator -- (int)
{
    Fixed tmp(*this);
    this->fix_point_num -= 1;
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a > b)
        return (a);
    return (b);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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
    // std::cout << fix_point_num << std::endl;
    return ((float)(fix_point_num / (float)(1 << fra_bits)));
}

std::ostream &operator << (std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return (out);
}