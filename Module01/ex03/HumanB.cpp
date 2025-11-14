/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:44:16 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 20:54:47 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){}

void HumanB::attack()
{
    std::cout << _name <<  " attacks with their " << _arm->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &arm)
{
    _arm = &arm;
}