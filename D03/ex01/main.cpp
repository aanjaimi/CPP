#include "ScavTrap.hpp"

int main()
{
    ScavTrap    a();
    ClapTrap * p = new ScavTrap;
    p->attack("said");
    // ScavTrap    b(a);
    // ScavTrap    c;
    delete p;

    // c = a;

    // std::cout << a.getHitPt() << std::endl;
    // std::cout << b.getHitPt() << std::endl;
    // std::cout << c.getHitPt() << std::endl;
    // a.attack("ayoub");
    // std::cout << a.getHitPt() << std::endl;
    // a.beRepaired(10);
    // std::cout << a.getHitPt() << std::endl;
    // a.takeDamage(10);
    // std::cout << a.getHitPt() << std::endl;
    // a.takeDamage(10);
    // std::cout << a.getHitPt() << std::endl;
    // a.takeDamage(10);
    // std::cout << a.getHitPt() << std::endl;
    // a.guardGate();
}