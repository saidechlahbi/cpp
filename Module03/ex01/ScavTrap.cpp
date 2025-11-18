/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:28:40 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/12 21:30:29 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): _name("Unnamed"), _hit_points(100), _energy_points(50), _attack_damage(20)
{
    std::cout << "ScavTrap " << _name << " constructed (HP=" << _hit_points
              << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;
}

ScavTrap::ScavTrap(std::string name): _name(name), _hit_points(100), _energy_points(50),
                                        _attack_damage(20) 
{
    std::cout << "ScavTrap " << _name << " constructed (HP=" << _hit_points
              << ", EP=" << _energy_points << ", AD=" << _attack_damage << ")" << std::endl;
}

// ScavTrap::ScavTrap(const ScavTrap& other): _name(other._name)
//     , _hit_points(other._hit_points), _energy_points(other._energy_points)
//     , _attack_damage(other._attack_damage)
// {
//     std::cout << "ScavTrap " << _name << " copy-constructed" << std::endl;
// }


ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Copy assignment operator is called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    std::cout << "ScavTrap " << _name << " assigned" << std::endl;
    return *this;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

