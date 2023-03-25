#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat b1("B1", 100);
        Bureaucrat b2("B2", 150);
        Form f("F1", 100, 150);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << f << std::endl;

        b1.signForm(f);

        std::cout << b1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}