#include "Iter.hpp"

void    f(const std::string &s)
{
    std::cout << s << std::endl;
}

int main()
{
    std::string strs[4] = {
        "My",
        "name",
        "is",
        "ayoub"
    };
    iter(strs, sizeof(strs) / sizeof(std::string), f);
    return (0);
}