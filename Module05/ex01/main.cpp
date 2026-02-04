#include "Bureaucrat.hpp"

int main() 
{
    std::cout << "--- Test 1: Valid Bureaucrat ---" << std::endl;
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;
        bob.incrementgrade();
        std::cout << "After increment: " << bob << std::endl;
        bob.decrementgrade();
        std::cout << "After decrement: " << bob << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Test 2: Grade Too High in Constructor ---" << std::endl;
    try {
        Bureaucrat high("High", 0);
    } catch (std::exception &e) {
        std::cerr << "Caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 3: Grade Too Low in Constructor ---" << std::endl;
    try {
        Bureaucrat low("Low", 151);
    } catch (std::exception &e) {
        std::cerr << "Caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 4: Increment Violation ---" << std::endl;
    try {
        Bureaucrat boss("Boss", 1);
        std::cout << boss << std::endl;
        boss.incrementgrade();
    } catch (std::exception &e) {
        std::cerr << "Caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 5: Decrement Violation ---" << std::endl;
    try {
        Bureaucrat lazy("Lazy", 150);
        std::cout << lazy << std::endl;
        lazy.decrementgrade();
    } catch (std::exception &e) {
        std::cerr << "Caught: " << e.what() << std::endl;
    }
}