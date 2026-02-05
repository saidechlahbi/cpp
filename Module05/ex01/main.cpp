#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try 
    {
        Bureaucrat b1("John", 2);
        Bureaucrat b2("Intern", 140);
        Form f1("Tax Form", 20, 45);
        Form f2("Presidential Pardon", 1, 1);

        std::cout << b1 << b2 << f1 << std::endl << f2 << std::endl;

        std::cout << "--- Test 1: Successful sign ---" << std::endl;
        b1.signForm(f1);
        std::cout << f1 << std::endl;

        std::cout << "\n--- Test 2: Grade too low to sign ---" << std::endl;
        b2.signForm(f2);
        std::cout << f2 << std::endl;

        std::cout << "\n--- Test 3: Create form with invalid grade ---" << std::endl;
        Form f3("Impossible", 0, 150);
    }
    catch (std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}