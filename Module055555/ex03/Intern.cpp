#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}
Intern::Intern(const Intern* other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern(){}

AForm* Intern::createShrubberyForm(std::string target)
{
    return  new ShrubberyCreationForm(target);
}
AForm* Intern::createRobotomyRequestForm(std::string target)
{
    return  new RobotomyRequestForm(target);
}
AForm* Intern::createPresidentialPardonForm(std::string target)
{
return  new PresidentialPardonForm(target);
}


AForm* Intern::makeForm(std::string form_name, std::string form_target)
{
    std::string names[3] = {
        "shrubbery creation", 
        "robotomy request", 
        "presidential pardon"};
    AForm* (Intern::*formCreators[3])(std::string) = {
        &Intern::createShrubberyForm,
        &Intern::createRobotomyRequestForm,
        &Intern::createPresidentialPardonForm
    };
    for(int i = 0; i< 3; i++)
    {
        if (form_name == names[i])
        {
            std::cout << "Intern creates " << form_name << std::endl;
            return (this->*formCreators[i])(form_target);
        }
    }
    std::cout << "Intern cannot create " << form_name << " form (unknown form type)" << std::endl;
    return NULL;
}