#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)    
            { _target = ""; }
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
            { _target = target; }
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : 
    Form(obj.getName(), obj.getSigned(), obj.getExecute()), _target(obj._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
       _target = obj._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    srand (time(NULL));
    if (rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}