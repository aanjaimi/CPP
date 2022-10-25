#include "Fixed.hpp"

Fixed::Fixed()
{
    fix_point_num = 0;
}

Fixed::Fixed(int value)
{
    fix_point_num = value << fra_bits;
}

Fixed::Fixed(float value)
{
    fix_point_num = (int)round(value * (float)(1 << fra_bits));
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}

Fixed &Fixed::operator = (const Fixed &f)
{
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

    res.fix_point_num = (this->fix_point_num * f.fix_point_num) >> fra_bits;
    return (res);
}

Fixed   Fixed::operator / (const Fixed &f)
{
    Fixed   res;

    res.setRawBits(this->fix_point_num / f.fix_point_num * (1 << fra_bits));
    return (res);
}

Fixed   &Fixed::operator ++ (void)
{
    //pre-increment
    this->fix_point_num += 1;
    return (*this);
}

Fixed   Fixed::operator ++ (int)
{
    //post-increment
    Fixed tmp(*this);
    this->fix_point_num += 1;
    return (tmp);
}

Fixed   &Fixed::operator -- (void)
{
    //pre-decrement
    this->fix_point_num -= 1;
    return (*this);
}

Fixed   Fixed::operator -- (int)
{
    //post-decrement
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
}

int Fixed::getRawBits(void) const
{
    return (fix_point_num);
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