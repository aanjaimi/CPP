#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Form : ./<executable> string\n";
        return (0);
    }
    Convert conv(av[1]);
    std::cout << conv;
}