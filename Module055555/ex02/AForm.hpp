#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
    protected:
        const std::string _name;
        bool _sign_state;
        const int _require_grade_to_sign;
        const int _require_grade_to_execute;
    public:
        AForm();
        AForm(const std::string n, const int rgs, const int rge);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        ~AForm();

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

        virtual void  execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream& out, const AForm& F);
#endif /*AFORM_HPP*/