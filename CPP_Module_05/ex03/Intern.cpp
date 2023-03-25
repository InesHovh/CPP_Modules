#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &obj) { *this = obj; }

Intern &Intern::operator=(const Intern &obj)
{
    if (this != &obj)
       return (*this);
    return (*this);
}

Form  *Intern::makeForm(std::string const &form_name, std::string const &target) const
{
    bool form[] = {form_name == "shrubbery creation", form_name == "robotomy request", form_name == "presidential pardon"};
    int i = 0;

    while (form[i] == 0)
        i++;
    switch (i)
    {
    case 0:
        std::cout << "Intern creates " << form_name << std::endl;
        return new ShrubberyCreationForm(target);
    case 1:
        std::cout << "Intern creates " << form_name << std::endl;
        return new RobotomyRequestForm(target);
    case 2:
        std::cout << "Intern creates " << form_name << std::endl;
        return new PresidentialPardonForm(target);
    default:
        throw std::runtime_error("Form doesn't exist!");
    }
}

Intern::~Intern() {}