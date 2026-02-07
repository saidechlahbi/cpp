#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm(),_target("default"){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(),_target(target)
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other), _target(other._target){}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        
        _target = other._target;
    }
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm();
void ShrubberyCreationForm::beSigned(Bureaucrat& boss);