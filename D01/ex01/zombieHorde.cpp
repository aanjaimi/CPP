#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *zom_hor;
    Zombie  *tmp;

    zom_hor = new Zombie[N];
    tmp = zom_hor;
    for (int i = 0;i < N;i++)
    {
        tmp->set_zombie(name);
        tmp++;
    }
    return (zom_hor);
}
