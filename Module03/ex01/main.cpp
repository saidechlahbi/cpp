/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:37:24 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 21:53:10 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scave("nemo"), nemo;
    nemo = scave;
    scave.attack("boo");
    scave.beRepaired(5);
    scave.takeDamage(10);
}