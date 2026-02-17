#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern* other);
        Intern* operator=(const Intern *other);
        ~Intern();
        AForm* makeForm(std::string form_name, std::string form_target);
        // private:
        AForm *createShrubberyForm(std::string target);
        AForm *createRobotomyRequestForm(std::string target);
        AForm *createPresidentialPardonForm(std::string target);
};

#endif /*INTERN_HPP*/