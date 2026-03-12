#include "AForm.hpp"

#include "Bureaucrat.hpp" 

/*orthodox canonical form*/
AForm::AForm():_name("unknown"), _sign_state(false), _require_grade_to_sign(1), _require_grade_to_execute(1){}

AForm::AForm(const std::string n, const int rgs, const int rge):
    _name(n), _sign_state(false), _require_grade_to_sign(rgs), _require_grade_to_execute(rge)
{
    if (_require_grade_to_sign < 1 || _require_grade_to_execute < 1)
        throw GradeTooHighException();
    if (_require_grade_to_sign > 150 || _require_grade_to_execute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other): 
    _name(other._name), _sign_state(other._sign_state), _require_grade_to_sign(other._require_grade_to_sign), _require_grade_to_execute(other._require_grade_to_execute){}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        _sign_state = other._sign_state;
    }
    return *this;
}

AForm::~AForm(){}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "AForm: Grade Too High Exception ";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "AForm: Grade Too Low Exception";
}
const char *AForm::NotSignedException::what() const throw()
{
    return "the form not signed";
}
void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= _require_grade_to_sign)
    {
        _sign_state = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}

std::string AForm::getName() const
{
    return _name;
}
bool AForm::getSignState() const
{
    return _sign_state;
}
 int AForm::getRequireGradeToSign() const
{
    return _require_grade_to_sign;
}
 int AForm::getRequireGradeToExecute() const
{
    return _require_grade_to_execute;
}

/*overload the insertion («) operator*/
std::ostream &operator<<(std::ostream &out, const AForm& f)
{
    std::string s;
    if (f.getSignState())
        s = " signed";
    else
        s = " unsigned";
    out << "AForm named " << f.getName() << s << ", sign grade " << f.getRequireGradeToSign()
        << ", execute grade " << f.getRequireGradeToExecute() << "." << std::endl;
    return out;
}
