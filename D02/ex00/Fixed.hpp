#pragma once

#include <iostream>

class Fixed
{
private:
    int                 fix_point_num;
    static const int    fra_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &f);
    ~Fixed();
    Fixed   &operator = (const Fixed &f);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};
