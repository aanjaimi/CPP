#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 fix_point_num;
    static const int    fra_bits = 8;
public:
    Fixed();
    Fixed (int value);
    Fixed(float value);
    Fixed(const Fixed &f);
    ~Fixed();
    Fixed   &operator = (const Fixed &f);
    bool    operator > (const Fixed &f);
    bool    operator < (const Fixed &f);
    bool    operator >= (const Fixed &f);
    bool    operator <= (const Fixed &f);
    bool    operator == (const Fixed &f);
    bool    operator != (const Fixed &f);
    Fixed   operator + (const Fixed &f);
    Fixed   operator - (const Fixed &f);
    Fixed   operator * (const Fixed &f);
    Fixed   operator / (const Fixed &f);
    Fixed   &operator ++ (void);
    Fixed   operator ++ (int);
    Fixed   &operator -- (void);
    Fixed   operator -- (int);
    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    static  Fixed &min(Fixed &a, Fixed &b);
    static  const Fixed &min(const Fixed &a, const Fixed &b);
    static  Fixed &max(Fixed &a, Fixed &b);
    static  const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream& out, const Fixed& f);