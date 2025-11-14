/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:18:13 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 17:55:13 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
    Zombie *hord_of_zombie = new Zombie[N];
    if (!hord_of_zombie)
        return NULL;
    for (int i = 0; i < N; i++)
        hord_of_zombie[i].setName(name);
    return hord_of_zombie;
}