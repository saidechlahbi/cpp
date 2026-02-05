#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Form
{
        const std::string _name;
        bool _signature;
        const int _requireGrade;
        const int _execute_grade;
    public:
        /*orthodox  canonucal form*/
        Form();
        Form(const std::string name, const int sign_grade, const int execute_grade);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

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

        /*methods*/
        void beSigned(Bureaucrat& boss);
        /*getters*/
        std::string getName() const;
        bool getSignature() const;
        int getRequireGrade() const;
        int getExecuteGrade() const;
};
std::ostream &operator<<(std::ostream &out, const Form& f);


#endif /*FORM_HPP*/