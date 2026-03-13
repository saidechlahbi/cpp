#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
        const std::string _name;
        bool _sign_state;
        const int _require_grade_to_sign;
        const int _require_grade_to_execute;
    public:
        Form();
        Form(const std::string n, const int rgs, const int rge);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        class GradeTooHighException: public std::exception
        {
            const char *what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            const char *what() const throw();
        };

        std::string getName() const;
        bool getSignState() const;
        int getRequireGradeToSign() const;
        int getRequireGradeToExecute() const;

        void beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream& out, const Form& F);
#endif /*FORM_HPP*/