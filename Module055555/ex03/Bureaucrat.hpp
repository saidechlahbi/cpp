#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class AForm;
class Bureaucrat
{
       std:: string _name;
       int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name , int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        class GradeTooHighException: public std::exception
        {
            const char *what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            const char *what() const throw();
        };

        void incrementGrade();
        void decrementGrade();

        void signForm(AForm& f);

        void executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);
#endif /* BUREAUCRAT_HPP */