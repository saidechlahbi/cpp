/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:18:05 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 17:45:48 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *hord = zombieHorde(5, "boo");
    if (!hord)
        return 1;
    for(int i = 0; i < 5; i++)
        hord[i].announce();
    delete[] hord;
    return 0;
}