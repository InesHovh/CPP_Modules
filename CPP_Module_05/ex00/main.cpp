#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat b("1", 10);
        std::cout << b << std::endl;
        b.decrement();
        std::cout << b << std::endl;
        b.increment();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}