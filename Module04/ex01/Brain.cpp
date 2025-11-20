#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "constructor of brain is called" << std::endl;
}
Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[100];
    std::cout << "copy constructor of brain is called" << std::endl;
}
Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    std::cout << "copy operator assignment of brain is called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "destructor of brain is called" << std::endl;
}