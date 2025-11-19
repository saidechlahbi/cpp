/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:29:39 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 22:16:56 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " constructed (HP=" << _hit_points
              << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " constructed (HP=" << _hit_points
              << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " copy-constructed" << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "Copy assignment operator is called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << _name << " assigned" << std::endl;
    return *this;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}


void FragTrap::attack(const std::string& target)
{
    if (_energy_points <= 0 || _hit_points <= 0)
    {
        std::cout << "FragTrap named " << _name << " can't attack" << std::endl;
        return ;
    }
    _energy_points--;
    std::cout << "FragTrap " << _name << " attacks " 
     << target <<  " causing " << _attack_damage<<  " points of damage!" << std::endl;

}


void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;

}