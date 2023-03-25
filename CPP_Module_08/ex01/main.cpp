#include "Span.hpp"
#include <vector>

int main(void)
{
    try
    {
        Span sp = Span(5);

        sp.addNumber(10);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(7);
        sp.addNumber(8);

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    try
    {
        Span sp = Span(5);

        sp.addNumber(10);
        sp.addNumber(5);
        sp.addNumber(6);
        sp.addNumber(7);
        sp.addNumber(9);
        sp.addNumber(8);

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    try
    {
        Span sp = Span(1);

        sp.addNumber(10);

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    try
    {
        Span sp = Span(10000);

        for (int i = 0; i < 10000; i++)
            sp.addNumber(i);

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    try
    {
        std::vector<int> vec;
        vec.push_back(0);
        vec.push_back(20);
        vec.push_back(5);
        vec.push_back(15);
        vec.push_back(2);

        Span sp = Span(5);
        sp.addNumber(vec.begin(), vec.end());

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    return (0);
}