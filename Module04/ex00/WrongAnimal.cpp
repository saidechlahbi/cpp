/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:08 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 23:29:09 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    std::cout << "The default constructer is called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other):type(other.type)
{
    std::cout << "Copy constructor is called for WrongAnimal" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
    {
        type =  other.type;
    }
    std::cout << "Copy assignment operator is called for WrongAnimal" << std::endl;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimals don’t bark" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}