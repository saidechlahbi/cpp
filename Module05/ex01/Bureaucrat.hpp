

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <exception>

class Form ;
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        /*orthodox canonical form*/
        Bureaucrat();
         Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
    
        /*exception classes*/
        class GradeTooHighException : public std::exception
        {
            public:
            const char* what() const throw();
        };

        class GradeTooLowException :public std::exception
        {
            public:
            const char* what() const throw();
        };

        /*getters*/
        std::string getName() const;
        int getGrade() const;

        /*increment and decrement the grade*/
        void incrementgrade();
        void decrementgrade();

        void signForm(Form &f);

};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif /* BUREAUCRAT_HPP */