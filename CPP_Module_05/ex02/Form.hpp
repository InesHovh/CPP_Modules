#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _sign;
    int _grade_sign;
    int _grade_execute;
public:
    Form();
    Form(std::string name, int grade_execute, int grade_sign);
    Form(const Form &obj);
    Form &operator=(const Form &obj);

    std::string getName() const;
    bool getSign() const;
    int getExecute() const;
    int getSigned() const;

    void increment();
    void decrement();

    void beSigned(Bureaucrat sign);

    virtual void execute(Bureaucrat const &executor) const = 0;

    ~Form ();

class GradeTooHighException : public std::exception {
    const char * what() const throw();
};

class GradeTooLowException : public std::exception {
    const char * what() const throw();
};

};

std::ostream &operator<<(std::ostream &obj, const Form &a);

#endif