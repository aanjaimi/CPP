#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int>m(4);
    m[0] = 10;
    m[1] = 20;
    m[2] = 30;
    m[3] = 40;
    try
    {
        easyfind(m, 40);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
