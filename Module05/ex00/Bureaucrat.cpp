#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
    if (grade > 150)    
        throw 
    if (grade < 1)
        throw
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName()
{
    return _name;
}

int Bureaucrat::getGrade()
{
    return _grade;
}

void Bureaucrat::setName(std::string name)
{
    _name = name;
}
void Bureaucrat::setGrade(int grade)
{
    _grade = grade;
}

void Bureaucrat::incrementgrade()
{
    _grade++;
}
void Bureaucrat::decrimentgrade()
{
    _grade--;
}

void Bureaucrat::GradeTooHighException();
void Bureaucrat::GradeTooLowException();