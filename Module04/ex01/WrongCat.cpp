/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:13 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 23:29:14 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(), brain(new Brain())
{
    type = "WrongCat";
    std::cout << "The default constructer is called for WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other)
{
    if (other.brain)
        brain = other.brain;
    std::cout << "Copy constructor is called for WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        if (brain)
            delete brain;
        if (other.brain)
            brain = other.brain;
        else
            brain = NULL;
    }
    std::cout << "Copy assignment operator is called for WrongCat" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    delete brain;
    std::cout << "WrongCat is destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
