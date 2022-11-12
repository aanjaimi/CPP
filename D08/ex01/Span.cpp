#include "Span.hpp"

Span::Span()
{
    N = 0;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::~Span()
{
    
}

unsigned int     Span::size() const
{
    return (v.size());
}

std::vector<int> const &Span::getValues() const
{
    return (v);
}

void    Span::addNumber(int nb)
{
    if (this->size() + 1 > N)
        throw AlreadyFull();
    else
        v.push_back(nb);
};

int     Span::shortestSpan()
{
    if (this->size() < 2)
        throw NotFound();
    int             min;

    min = 2147483647;
    for (unsigned int i = 0;i < this->size(); i++)
    {
        for (unsigned int j = i + 1; j < this->size(); j++)
        {
            if (min > abs(v[i] - v[j]))
                min = abs(v[i] - v[j]);
        }
    }
    return (min);
}

int     Span::longestSpan()
{
    if (this->size() < 2)
        throw NotFound();
    int             max;

    max = -2147483648;
    for (unsigned int i = 0;i < this->size(); i++)
    {
        for (unsigned int j = i + 1; j < this->size(); j++)
        {
            if (max < abs(v[i] - v[j]))
                max = abs(v[i] - v[j]);
        }
    }
    return (max);
}