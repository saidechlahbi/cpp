#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat intern("Intern", 150);
        
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Arthur Dent");
        
        std::cout << "=== Shrubbery Creation Test ===" << std::endl;
        boss.signForm(shrub);
        boss.executeForm(shrub);
        
        std::cout << "\n=== Robotomy Request Test ===" << std::endl;
        boss.signForm(robot);
        boss.executeForm(robot);
        
        std::cout << "\n=== Presidential Pardon Test ===" << std::endl;
        boss.signForm(pardon);
        boss.executeForm(pardon);
        
        std::cout << "\n=== Failed Execution Test ===" << std::endl;
        ShrubberyCreationForm shrub2("garden");
        Intern someIntern;
        AForm *f1 = someIntern.makeForm("shrubbery creation", "home");
        delete (f1);
        AForm *f2 = someIntern.makeForm("robotomy request", "Bender");
        delete (f2);
        AForm *f3 = someIntern.makeForm("presidential pardon", "Arthur Dent");
        delete (f3);
        AForm *bad = someIntern.makeForm("unknown", "target"); // should return NULL
        delete (bad);
        intern.signForm(shrub2);  // Will fail
        intern.executeForm(shrub2);  // Will fail
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}