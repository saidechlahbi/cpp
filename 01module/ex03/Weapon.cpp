/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:25:01 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 20:22:27 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){}

std::string Weapon::getType()
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}
