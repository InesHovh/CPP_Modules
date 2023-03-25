#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat              bureaucrat("Test", 25);
        Bureaucrat              bureaucrat1("Boss", 6);
        ShrubberyCreationForm   sh("home");
        RobotomyRequestForm     rob("Work");
        PresidentialPardonForm  pres("John");

        bureaucrat.signForm(sh);
        bureaucrat1.executeForm(sh);
        bureaucrat.signForm(rob);
        bureaucrat1.executeForm(rob);
        bureaucrat.signForm(pres);
        bureaucrat1.executeForm(pres);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}