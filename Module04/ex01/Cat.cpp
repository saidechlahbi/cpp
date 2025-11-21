/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:13 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/21 17:17:27 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(), brain(new Brain())
{
    type = "Cat";
    std::cout << "The default constructer is called for Cat" << std::endl;
}

Cat::Cat(const Cat& other):Animal(other)
{
    type = other.type;
    if (other.brain)
        brain = new Brain(*other.brain);
    else
        brain = NULL;
    std::cout << "Copy constructor is called for Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (brain)
            delete brain;
        if (other.brain)
            brain = new Brain(*other.brain);
        else
            brain = NULL;
        type = other.type;
    }
    std::cout << "Copy assignment operator is called for Cat" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat is destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
