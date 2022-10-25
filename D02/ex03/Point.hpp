#pragma once

#include "Fixed.hpp"

class Point
{
private:
    const Fixed   x;
    const Fixed   y;
public:
    Point();
    Point(const float xx, const float yy);
    Point(const Point &p);
    const Fixed   &GetX() const;
    const Fixed   &GetY() const;
    Point   &operator = (const Point &p);
    ~Point();
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);