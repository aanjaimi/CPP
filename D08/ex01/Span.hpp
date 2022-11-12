#pragma once

#include <iostream>
#include <vector>

class AlreadyFull : public std::exception
{
public:
    const char * what() const throw()
    {
        return ("Already Full");
    }
};

class NotFound : public std::exception
{
public:
    const char * what() const throw()
    {
        return ("No Span Can Be Found");
    }
};

class Span
{
private:
    unsigned int            N;
    std::vector<int>        v;
public:
    Span();
    Span(unsigned int N);
    ~Span();
    unsigned int            size() const;
    std::vector<int> const  &getValues() const;
    void    addNumber(int nb);
    int     shortestSpan();
    int     longestSpan();
};
