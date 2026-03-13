#include "Form.hpp"

#include "Bureaucrat.hpp" 

/*orthodox canonical form*/
Form::Form():_name("unknown"), _sign_state(false), _require_grade_to_sign(1), _require_grade_to_execute(1){}

Form::Form(const std::string n, const int rgs, const int rge):
    _name(n), _sign_state(false), _require_grade_to_sign(rgs), _require_grade_to_execute(rge)
{
    if (_require_grade_to_sign < 1 || _require_grade_to_execute < 1)
        throw GradeTooHighException();
    if (_require_grade_to_sign > 150 || _require_grade_to_execute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other): 
    _name(other._name), _sign_state(other._sign_state), _require_grade_to_sign(other._require_grade_to_sign), _require_grade_to_execute(other._require_grade_to_execute){}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        _sign_state = other._sign_state;
    }
    return *this;
}

Form::~Form(){}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form: Grade Too High Exception ";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form: Grade Too Low Exception";
}

void Form::beSigned(Bureaucrat &b)
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

std::string Form::getName() const
{
    return _name;
}
bool Form::getSignState() const
{
    return _sign_state;
}
 int Form::getRequireGradeToSign() const
{
    return _require_grade_to_sign;
}
 int Form::getRequireGradeToExecute() const
{
    return _require_grade_to_execute;
}

/*overload the insertion («) operator*/
std::ostream &operator<<(std::ostream &out, const Form& f)
{
    std::string s;
    if (f.getSignState())
        s = " signed";
    else
        s = " unsigned";
    out << "Form named " << f.getName() << s << ", sign grade " << f.getRequireGradeToSign()
        << ", execute grade " << f.getRequireGradeToExecute() << "." << std::endl;
    return out;
}
