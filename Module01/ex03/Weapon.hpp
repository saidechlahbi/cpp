/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:22:08 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/21 20:20:22 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        std::string getType();
        void setType(std::string type);
};

#endif /*WEAPON_HPP*/
