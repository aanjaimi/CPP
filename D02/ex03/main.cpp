#include "Point.hpp"

int main(void)
{
    Point   a(4,5);
    Point   b(2,7);
    Point   c(3,2);
    Point   p(3,2);

    std::cout << bsp(a, b, c, p) << std::endl;
    return 0;
}
