#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if(_grade < 1) throw GradeTooHighException();
    if(_grade > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        _grade = obj.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::increment()
{
   if(_grade == 150) throw GradeTooLowException();
   _grade++;
}

void Bureaucrat::decrement()
{
    if (_grade == 1) throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::signForm(Form &form) const
{
    try
    {
       form.beSigned(*this);
       std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

std::ostream &operator<<(std::ostream &obj, const Bureaucrat &a)
{
    return obj << a.getName() << ", Bureaucrat grade " << a.getGrade() << std::endl;
}

const char *  Bureaucrat::GradeTooLowException::what() const throw() {
    return "Too Low Exception" ;
};

const char *  Bureaucrat::GradeTooHighException::what() const throw() {
    return "Too High Exception" ;
};

Bureaucrat::~Bureaucrat () {}