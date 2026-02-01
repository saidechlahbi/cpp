

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        std::string getName();
        int getGrade();

        void setName(std::string name);
        void setGrade(int grade);

        void incrementgrade();
        void decrimentgrade();

        void GradeTooHighException();
        void GradeTooLowException();
};

#endif /* BUREAUCRAT_HPP */