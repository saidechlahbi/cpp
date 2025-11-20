/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:21 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 23:29:22 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(const WrongDog& other);
        WrongDog& operator=(const WrongDog& other);
        ~WrongDog();
        
        void makeSound() const;
};

#endif /*WRONGDOG_HPP*/