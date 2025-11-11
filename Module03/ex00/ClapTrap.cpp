

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) {}
ClapTrap::ClapTrap(const ClapTrap& other): _name(other._name) {}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    this->_name = other.getName();
    return *this;
}
ClapTrap::~ClapTrap(){}

void ClapTrap::attack(const std::string& target)
{

}
void ClapTrap::takeDamage(unsigned int amount)
{

}
void ClapTrap::beRepaired(unsigned int amount)
{
    
}
std::string ClapTrap::getName()
{
    return _name;
}