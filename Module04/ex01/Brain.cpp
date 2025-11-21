#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "Constructor of brain is called" << std::endl;
}
Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[100];
    std::cout << "Copy constructor of brain is called" << std::endl;
}
Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    std::cout << "Copy operator assignment of brain is called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Destructor of brain is called" << std::endl;
}