/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:18 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 23:29:19 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal()
{
    type = "WrongDog";
    std::cout << "The default constructer is called for WrongDog" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other):WrongAnimal(other)
{
    std::cout << "Copy constructor is called for WrongDog" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    std::cout << "Copy assignment operator is called for WrongDog" << std::endl;
    return *this;
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog is destroyed" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}