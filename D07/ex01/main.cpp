#include "Iter.hpp"

void    f(std::string &s)
{
    s = "anjaimi";
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
    for (int i = 0;i < 4;i++)
        std::cout << strs[i] << std::endl;
}