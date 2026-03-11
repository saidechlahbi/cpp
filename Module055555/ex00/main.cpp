#include "Bureaucrat.hpp"

int main() 
{
    try
    {
        Bureaucrat a("said", 44);
        std::cout << a;
        a.incrementGrade();
        std::cout << "after increment "<< std::endl;
        std::cout << a;
        Bureaucrat hamza("hamza", 151);
    }
    catch(std::exception& exc)
    {
        std::cout << "error: " << exc.what() << std::endl;
    }
    
    try
    {
        Bureaucrat a("said", 11);
        std::cout << a;
        a.decrementGrade();
        std::cout << "after decrement "<< std::endl;
        std::cout << a;
        Bureaucrat malvic("malvic", 0);
    }
    catch(std::exception& exc)
    {
        std::cout << "error: " << exc.what() << std::endl;
    }
}