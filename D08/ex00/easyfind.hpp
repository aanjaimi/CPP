#pragma once

#include <iostream>

class NotFound : public std::exception
{
public:
    const char * what() const throw()
    {
        return ("Not Found");
    }
};

template <typename T>
void    easyfind(T a, int x)
{
    typename T::iterator it;
    it = std::find(a.begin(),a.end(),x);
    if(it != a.end())
        std::cout << "I found it at " << it - a.begin() << std::endl;
    else 
        throw NotFound();
}