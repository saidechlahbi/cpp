/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:36:42 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 20:39:12 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

// HumanA::HumanA(std::string name, Weapon& weapon) 
// {
//     this->name = name;
//     this->weapon = weapon;
// }

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon){}


void HumanA::attack()
{
    std::cout << name << " attacks with their " <<  weapon.getType() << std::endl;
}