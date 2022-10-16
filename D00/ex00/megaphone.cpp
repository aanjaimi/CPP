#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    while (++i < ac)
    {
        j = -1;
        while (av[i][++j])
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] -= 32;
        }
        if (i != ac - 1)
            std::cout << av[i];
        else
            std::cout << av[i] << std::endl;
    }
    return (0);
}