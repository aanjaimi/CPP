#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    std::vector<int> vec(4, 10); 
    try
    {
        sp.addNumber(20);
        sp.addManyNumber(vec.begin(), vec.end());
        sp.addNumber(30);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::vector<int>::iterator it;
    for (it = sp.getValues().begin();it < sp.getValues().end();it++)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}