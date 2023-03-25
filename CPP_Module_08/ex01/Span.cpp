#include "Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int _N)
{
    N = _N;
}

Span::Span(const Span &span)
{
    *this = span;
}

Span &Span::operator=(const Span &span)
{
    if (this != &span)
        N = span.N;
    return (*this);
}

void Span::addNumber(unsigned int _N)
{
    if (set.size() == N) throw SizeException();
    set.insert(_N);
}

unsigned int Span::longestSpan()
{
    if (set.size() == 0 || set.size() == 1) throw RangeException();

    std::multiset<int>::iterator end = set.end();
    --end;

    return (*end - *(set.begin()));
}

unsigned int Span::shortestSpan()
{
    if (set.size() == 0 || set.size() == 1) throw RangeException();

    std::multiset<int>::iterator x = set.begin();
    ++x;

    int min = *x - *(set.begin());
    for (std::multiset<int>::iterator iter = set.begin(); x != set.end(); ++iter)
    {
        if (*x - *iter < min)
        {
            min = *x - *iter;
        }
        ++x;
    }
    return min;
}

Span::~Span() {}

const char *Span::RangeException::what() const throw()
    { return "Multiset has too few elements!"; }

const char *Span::SizeException::what() const throw()
    { return "Multiset is full!"; }


