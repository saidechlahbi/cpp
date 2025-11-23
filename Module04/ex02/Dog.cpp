/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:18 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/23 21:50:37 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() ,brain(new Brain())
{
    type = "Dog";
    std::cout << "The default constructer is called for Dog" << std::endl;
}

Dog::Dog(const Dog& other):Animal(other)
{
    if (other.brain)
        brain = new Brain(*other.brain);
    else
        brain = NULL;
    std::cout << "Copy constructor is called for Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
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
    }
    std::cout << "Copy assignment operator is called for Dog" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog is destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}