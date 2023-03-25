#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &obj);

    Form  *makeForm(std::string const &form_name, std::string const &target) const;

    ~Intern();
};

#endif