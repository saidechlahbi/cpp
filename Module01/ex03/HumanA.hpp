/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:20:22 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 20:26:57 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HumanA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon weapon;
    public:
        HumanA(std::string name, Weapon weapon);
        void attack();
};

#endif