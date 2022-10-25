#include "Point.hpp"

Point::Point() : x(0) , y(0)
{
    
}

Point::Point(const float xx, const float yy) : x(xx) , y(yy)
{
    
}

Point::Point(const Point &p) : x(p.GetX()), y(p.GetY())
{

}

Point   &Point::operator = (const Point &p)
{
    (Fixed)this->x = (Fixed)p.x;
    (Fixed)this->y = (Fixed)p.y;
    return (*this);
}

Point::~Point()
{

}

const Fixed   &Point::GetX() const
{
    return (x);
}

const Fixed   &Point::GetY() const
{
    return (y);
}

static  float   cal_area(Point const a, Point const b, Point const c)
{
    Fixed   f;
    float   t;

    f = (a.GetX().getRawBits() * c.GetY().getRawBits()) - (a.GetX().getRawBits() * b.GetY().getRawBits()) + (b.GetX().getRawBits() * a.GetY().getRawBits()) - (b.GetX().getRawBits() * c.GetY().getRawBits()) + (c.GetX().getRawBits() * b.GetY().getRawBits()) - (c.GetX().getRawBits() * a.GetY().getRawBits());
    t = f.getRawBits();
    if (t < 0)
        t *= -1;
    t /= 2;
    return (t);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   abp = cal_area(a, b, point);
    float   acp = cal_area(a, c, point);
    float   bcp = cal_area(b, c, point);
    float   abc = cal_area(a, b, c);

    if (abp == 0 || acp == 0 || bcp == 0 || (abp + acp + bcp) != abc)
        return (0);
    return (1);
}