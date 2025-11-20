/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:37:24 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/20 14:57:08 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== FragTrap test: construction & behavior ===" << std::endl;
    FragTrap f("optimus");
    f.attack("target");
    f.highFivesGuys();
    f.takeDamage(40);
    f.beRepaired(25);
    f.takeDamage(200);
    ScavTrap a;
    a.attack("hmida");
    return 0;
}