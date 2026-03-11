#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5),_target ("default"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other), _target(other._target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (_signature == false)
        throw AForm::NotSignedException();
    if (executor.getGrade() > _execute_grade)
        throw AForm::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}