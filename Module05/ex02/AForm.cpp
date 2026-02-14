#include "AForm.hpp"
#include "Bureaucrat.hpp" 
    /*orthodox canonical form*/
AForm::AForm(): _name("default"), _signature(false), _requireGrade(150), _execute_grade(150){}

AForm::AForm(const std::string name, const int sign_grade, const int execute_grade):
     _name(name), _signature(false), _requireGrade(sign_grade), _execute_grade(execute_grade)
{
    if (_requireGrade < 1 || _execute_grade < 1 )
        throw AForm::GradeTooHighException();
    if (_requireGrade > 150 || _execute_grade > 150 )
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& other):
    _name(other._name), _signature(other._signature), _requireGrade(other._requireGrade), _execute_grade(other._execute_grade) {}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        this->_signature = other._signature;
    }
    return *this;
}
AForm::~AForm(){}


/*getters*/
 std::string AForm::getName() const
{
    return _name;
}
bool AForm::getSignature() const
{
    return _signature;
}
 int AForm::getRequireGrade() const
{
    return _requireGrade;
}
 int AForm::getExecuteGrade() const
{
    return _execute_grade;
}
const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char *AForm::NotSignedException::what() const throw()
{
    return "The not signed";
}
    /*methods*/
void AForm::beSigned(Bureaucrat& boss)
{
    if (boss.getGrade() >= _requireGrade)
        _signature = true;
    else
        throw AForm::GradeTooLowException();
}

/*overload the insertion («) operator*/
std::ostream &operator<<(std::ostream &out, const AForm& f)
{
    std::string s;
    if (f.getRequireGrade())
        s = " signed";
    else
        s = " unsigned";
    out << "AForm named " << f.getName() << s << ", sign grade " << f.getRequireGrade()
        << ", execute grade " << f.getExecuteGrade() << "." << std::endl;
    return out;
}
