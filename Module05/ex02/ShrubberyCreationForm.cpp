#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm(),_target("default"){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(),_target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other), _target(other._target){}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::beSigned(Bureaucrat& boss)
{
    if (boss.getGrade() >= _requireGrade)
        _signature = true;
    else
        throw AForm::GradeTooLowException();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->_signature == false)
        throw AForm::NotSignedException();
    
    if (executor.getGrade() > this->_execute_grade )
        throw AForm::GradeTooLowException();
    std::ofstream outfile(this->_target + "_shrubbery");
    if (!outfile.is_open())
        return;
    outfile << "               ,@@@@@@@," << std::endl;
    outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    outfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    outfile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    outfile << "       |o|        | |         | |" << std::endl;
    outfile << "       |.|        | |         | |" << std::endl;
    outfile << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
    outfile.close();
}
