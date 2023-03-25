#include "Form.hpp"

Form::Form() : _name("Form"), _grade_sign(1), _grade_execute(1)
{
    _sign = false;
}

Form::Form(std::string name, int grade_sign, int grade_execute) : _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
    _sign = false;
    if(_grade_execute < 1 || _grade_sign < 1) throw GradeTooHighException();
    if(_grade_execute > 150 || _grade_sign > 150) throw GradeTooLowException();
}

Form::Form(const Form &obj) : _name(obj.getName()), _sign(obj.getSign()), _grade_sign(obj.getSigned()),
                                _grade_execute(obj.getExecute()) {}

Form &Form::operator=(const Form &obj)
{
    if (this != &obj)
       _sign = obj.getSign();
    return (*this);
}

std::string Form::getName() const
{
    return (_name);
}

bool Form::getSign() const
{
    return (_sign);
}
int Form::getExecute() const
{
    return (_grade_execute);
}

int Form::getSigned() const
{
    return (_grade_sign);
}

void Form::beSigned(Bureaucrat sign)
{
    if (_sign == true)
        throw std::runtime_error ("Your form already signed");
    if(sign.getGrade() > _grade_sign)
        throw GradeTooLowException();
    _sign = true;
}

const char *  Form::GradeTooHighException::what() const throw() {
    return "Too High Exception" ;
};

const char *  Form::GradeTooLowException::what() const throw() {
    return "Too Low Exception" ;
};

std::ostream &operator<<(std::ostream &obj, const Form &a)
{
    obj << a.getName() << " get sign " << a.getSign() << std::endl;
    obj << a.getName() << " get grade execute " << a.getExecute() << std::endl;
    obj << a.getName() << " get grade sign " << a.getSigned() << std::endl;

    return (obj);
}

Form::~Form () {}