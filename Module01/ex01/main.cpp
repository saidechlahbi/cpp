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

Zombie* zombieHorde( int N, std::string name );

int main ()
{
    int horde_szie = 10;
    Zombie *horde = zombieHorde(horde_szie, "hordeZombie");
    if (!horde)
    {
        std::cout << "allocation failed to create a horde zombies" << std::endl;
        return 1;
    }
    for (int i = 0; i < horde_szie; i++)
        horde[i].announce();
    delete[] horde;
    return 1;
}
