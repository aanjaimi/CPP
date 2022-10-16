#include "Zombie.hpp"

int main()
{
    Zombie  *zom;
    Zombie  *tmp;

    zom = zombieHorde(10, "Foo");
    tmp = zom;
    for (int i = 0;i < 10;i++)
    {
        tmp->announce();
        tmp++;
    }
    delete[] zom;
    return (0);
}
