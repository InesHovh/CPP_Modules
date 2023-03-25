#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iterator>
#include <set>

class Span
{
private:
    unsigned int N;
    std::multiset<int> set;
public:
    Span();
    Span(unsigned int _N);
    Span(const Span &span);
    Span &operator=(const Span &span);
    void addNumber(unsigned int _N);

    template <typename T>
    void addNumber(T x, T y)
    {
        if (set.size() == N) throw SizeException();
        while(x != y)
        {
            set.insert(*x);
            ++x;
        }
    }

    unsigned int shortestSpan();
    unsigned int longestSpan();

    ~Span();

    class RangeException : public std::exception
        { const char * what() const throw(); };
    class SizeException : public std::exception
        { const char * what() const throw(); };
};

// std::ostream &operator<<(std::ostream &out, const Span &c);

#endif