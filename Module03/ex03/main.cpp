/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:37:24 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 23:16:01 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
 #include "ScavTrap.hpp"


int main()
{
    DiamondTrap nemo("nemo");
    nemo.attack("ahmed");
    nemo.beRepaired(5);
    nemo.takeDamage(10);
    nemo.whoAmI();
}