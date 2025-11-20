/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:13 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 23:29:14 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    type = "Cat";
    std::cout << "The default constructer is called for Cat" << std::endl;
}

Cat::Cat(const Cat& other):Animal(other)
{
    std::cout << "Copy constructor is called for Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    std::cout << "Copy assignment operator is called for Cat" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
