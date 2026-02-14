#include "Bureaucrat.hpp"
#include "AForm.hpp"

/*orthodox canonical form*/
Bureaucrat::Bureaucrat(): _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade){}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if (&other != this)
    {
        /*_name is const, so we can't assign it.*/
        this->_grade = other._grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat() {}


/*exception classes*/

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High Exception");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low Exception");
}


/*getters*/
std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

/*increment and decrement the grade*/
void Bureaucrat::incrementgrade()
{
    if (_grade == 1)
    {
        throw GradeTooHighException();
    }
    _grade--;
}

void Bureaucrat::decrementgrade()
{
    if (_grade == 150)
    {
        throw GradeTooLowException();
    }
    _grade++;
}

void Bureaucrat::signForm(AForm &f)
{
    try 
    {
        f.beSigned(*this);
        std::cout << _name << " signed " << f.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't sign " << f.getName() << " because " << e.what() << "." << std::endl;
    }
}


void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << _name <<  " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn't execute " << std::endl;
        // std::cerr << e.what() << '\n';
    }
    
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", Bureaucrat grade " << b.getGrade() << "." << std::endl;
    return out;
}
