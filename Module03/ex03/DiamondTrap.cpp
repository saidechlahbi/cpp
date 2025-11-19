/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:29:46 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 23:22:38 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
    _name = "Unnamed";
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
    std::cout << "DiamondTrap " << _name << " constructed (HP=" << _hit_points
              << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    _name = name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
    std::cout << "DiamondTrap " << _name << " constructed (HP=" << _hit_points
              << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    std::cout << "DiamondTrap " << _name << " copy-constructed" << std::endl;
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "Copy assignment operator is called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
    }
    std::cout << "DiamondTrap " << _name << " assigned" << std::endl;
    return *this;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}


void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << _name << std::endl;
    std::cout <<  "My claptrap name is " << this->ClapTrap::_name <<  std::endl;
}