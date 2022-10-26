#include "FragTrap.hpp"

int main()
{
    FragTrap    a;
    FragTrap    b(a);
    FragTrap    c;

    c = a;

    // std::cout << a.getHitPt() << std::endl;
    // std::cout << b.getHitPt() << std::endl;
    // std::cout << c.getHitPt() << std::endl;
    a.attack("ayoub");
    a.beRepaired(10);
    a.takeDamage(10);
    a.takeDamage(10);
    a.takeDamage(10);
    a.highFivesGuys();
}