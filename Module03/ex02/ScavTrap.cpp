/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:28:40 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/20 14:03:25 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " constructed (HP=" << _hit_points
              << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " constructed (HP=" << _hit_points
              << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "ScavTrap " << _name << " copy-constructed" << std::endl;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Copy assignment operator is called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << _name << " assigned" << std::endl;
    return *this;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if (_energy_points <= 0 || _hit_points <= 0)
    {
        std::cout << "ScavTrap named " << _name << " can't attack" << std::endl;
        return ;
    }
    _energy_points--;
    std::cout << "ScavTrap " << _name << " attacks " 
     << target <<  " causing " << _attack_damage<<  " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap named " << _name << " is now in Gate keeper mode." << std::endl;
}