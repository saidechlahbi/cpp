#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm(),_target ("default"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other), _target(other._target){}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (_signature == false)
        throw AForm::NotSignedException();
    if (executor.getGrade() > _execute_grade)
        throw AForm::GradeTooLowException();
    std::cout << "* some drilling noises *" << std::endl;
    std::cout << _target << " has been robotomized successfully!" << std::endl;
}