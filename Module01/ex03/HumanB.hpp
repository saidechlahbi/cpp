/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:43:40 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 20:45:51 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HumanB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon weapon;
    public:
        
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon weapon);
};

#endif