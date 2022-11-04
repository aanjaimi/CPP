#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    // A   *a;
    // B   *b;
    // C   *c;

    int r = rand()%3;
    switch (r)
    {
    case 0:
        return (new A);
    case 1:
        return (new B);
    case 2:
        return (new C);
    default:
        break;
    }
    return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A   &aa = dynamic_cast<A &>(p);
        (void)aa;
        std::cout << "A\n";
    }
    catch(const std::exception& e)
    {
        try
        {
            B   &bb = dynamic_cast<B &>(p);
            (void)bb;
            std::cout << "B\n";
        }
        catch(const std::exception& e)
        {
            try
            {
                C   &cc = dynamic_cast<C &>(p);
                (void)cc;
                std::cout << "C\n";
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    }
 
}
int main()
{
    Base    *b;


    srand(time(NULL));
    b = generate();
    std::cout << "Pointer test\n";
    identify(b);
    std::cout << "Refference test\n";
    identify(*b);
}