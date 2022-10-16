#include "Zombie.hpp"

int main()
{
    Zombie  *zom;

    zom = newZombie("Foo");
    zom->announce();

    randomChump("Bar");
    delete zom;
    return (0);
}
