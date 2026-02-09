#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class AForm
{
    protected:
        const std::string _name;
        bool _signature;
        const int _requireGrade;
        const int _execute_grade;
    public:
        /*orthodox  canonucal AForm*/
        AForm();
        AForm(const std::string name, const int sign_grade, const int execute_grade);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

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
        virtual void execute(Bureaucrat const & executor) const = 0;

        /*getters*/
        std::string getName() const;
        bool getSignature() const;
        int getRequireGrade() const;
        int getExecuteGrade() const;
};
std::ostream &operator<<(std::ostream &out, const AForm& f);


#endif /*AFORM_HPP*/