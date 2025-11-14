/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:20:22 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 20:35:29 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HumanA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_arm;
    public:
        HumanA(std::string name, Weapon &arm);
        void attack();
};


#endif