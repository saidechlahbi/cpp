#include "Form.hpp"
    /*orthodox canonical form*/
Form::Form(): _name("default"), _signature(false), _requireGrade(150), _execute_grade(150){}

Form::Form(const std::string name, const int sign_grade, const int execute_grade):
     _name(name), _signature(false), _requireGrade(sign_grade), _execute_grade(execute_grade)
    {
        if (_requireGrade < 1 || _execute_grade < 1 )
            throw Form::GradeTooHighException();
        if (_requireGrade > 150 || _execute_grade > 150 )
            throw Form::GradeTooLowException();
    }

Form::Form(const Form& other):
    _name(other._name), _signature(other._signature), _requireGrade(other._requireGrade), _execute_grade(other._execute_grade) {}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        this->_signature = other._signature;
    }
    return *this;
}
Form::~Form(){}


/*methods*/
void Form::beSigned(Bureaucrat boss)
{
    if (boss.getGrade() >= _requireGrade)
        _signature = true;
    else
        throw Form::GradeTooLowException();
}
void Form::signForm()
{
    
}

/*getters*/
const std::string Form::getName() const
{
    return _name;
}
bool Form::getSignature() const
{
    return _signature;
}
const int Form::getRequireGrade() const
{
    return _requireGrade;
}
const int Form::getExecuteGrade() const
{
    return _execute_grade;
}

/*overload the insertion («) operator*/
std::ostream &operator<<(std::ostream &out, const Form& f)
{
    std::string s;
    if (f.getRequireGrade())
        s = " signed";
    else
        s = " unsigned";
    out << "Form named " << f.getName() << s << ", sign grade " << f.getRequireGrade()
        << ", execute grade " << f.getExecuteGrade() << "." << std::endl;
    return out;
}
