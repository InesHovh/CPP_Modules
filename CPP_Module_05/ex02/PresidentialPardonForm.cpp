#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)    
            { _target = ""; }
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
            { _target = target; }
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : 
    Form(obj.getName(), obj.getSigned(), obj.getExecute()), _target(obj._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
       _target = obj._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}