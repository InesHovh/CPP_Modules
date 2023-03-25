#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat 
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &obj);

    std::string getName() const;
    int getGrade() const;

    void increment();
    void decrement();

    ~Bureaucrat ();

class GradeTooHighException : public std::exception {
    const char * what() const throw();
};

class GradeTooLowException : public std::exception {
    const char * what() const throw();
};

};

std::ostream &operator<<(std::ostream &obj, const Bureaucrat &a);

#endif