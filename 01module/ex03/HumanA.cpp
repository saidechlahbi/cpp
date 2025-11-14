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

HumanA::HumanA(std::string name, Weapon &arm): _name(name), _arm(arm) {}

void HumanA::attack()
{
    std::cout << _name <<  " attacks with their " << _arm.getType() << std::endl;
}
