#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)    
            { _target = ""; }
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
            { _target = target; }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) :
    Form(obj.getName(), obj.getSigned(), obj.getExecute()), _target(obj._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this != &obj)
       _target = obj._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::ofstream file(_target + "_shrubbery");
    file << ASCII_TREE;
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}