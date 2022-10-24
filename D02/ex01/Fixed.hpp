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
    Fixed (const int value);
    Fixed(const float value);
    Fixed(const Fixed &f);
    ~Fixed();
    Fixed   &operator = (const Fixed &f);
    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream& out, const Fixed& f);