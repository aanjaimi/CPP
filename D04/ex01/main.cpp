#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    // const Animal *j = new Dog();
    // const Animal *i = new Cat();
    const Dog d;
    const Dog e(d);
    const Cat c;
    const Cat b(c);

    // i->makeSound();
    // j->makeSound();
    // d.makeSound();
    // e.makeSound();
    std::cout << "-------------------------\n";

    // delete j;
    // delete i;

    return 0;
}