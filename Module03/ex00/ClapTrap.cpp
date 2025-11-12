/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:37:18 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/12 15:37:18 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    // std::cout << "The constructor is called" << std::endl;
    std::cout << "ClapTrap " << _name << " constructed (HP=" << _hit_points
    << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;;
}


ClapTrap::ClapTrap(const ClapTrap& other): _name(other._name)
    , _hit_points(other._hit_points), _energy_points(other._energy_points)
    , _attack_damage(other._attack_damage)
{
    std::cout << "ClapTrap " << _name << " copy-constructed" << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator is called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    std::cout << "ClapTrap " << _name << " assigned" << std::endl;
    return *this;
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}


/**/
void ClapTrap::attack(const std::string& target)
{
    if (_energy_points == 0 || _hit_points == 0)
    {
        std::cout << "ClapTrac named " << _name << " can't attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks" 
     << target <<  " causing " << _attack_damage<<  " points of damage!" << std::endl;

}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points == 0)
    {
        std::cout << "ClapTrap named " << _name 
        << "can't take damage. it is already dead" << std::endl;
        return;
    }
    if (_hit_points - amount <= 0)
    {
        std::cout << "ClapTrap named " << _name 
        << "is dead after taking "<< amount << " damage!" << std::endl;
        return ;
    }
    _hit_points -= amount;
    std::cout << "ClapTrap named " << _name 
    << "has taking  "<< amount << " damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points == 0 || _hit_points == 0)
    {
        std::cout "ClapTap named" << _name << " can't be repaired" << std::endl;
    }
    _energy_points--;
    _hit_points += amount;
    if (_hit_points > 10)
        _hit_points = 10;
    std::cout "ClapTap named" << _name << " has been repaired" << std::endl;
}
