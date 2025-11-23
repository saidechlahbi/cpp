/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:08 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/23 22:02:40 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "The default constructer is called for Animal" << std::endl;
}

Animal::Animal(const Animal& other):type(other.type)
{
    std::cout << "Copy constructor is called for Animal" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        type =  other.type;
    }
    std::cout << "Copy assignment operator is called for Animal" << std::endl;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal is destroyed" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}