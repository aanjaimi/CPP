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
    std::cout << a.getHitPt() << std::endl;
    a.beRepaired(10);
    std::cout << a.getHitPt() << std::endl;
    a.takeDamage(10);
    std::cout << a.getHitPt() << std::endl;
    a.takeDamage(10);
    std::cout << a.getHitPt() << std::endl;
    a.takeDamage(10);
    std::cout << a.getHitPt() << std::endl;
    a.highFivesGuys();
}