/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:24 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/19 23:29:25 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    std::cout << std::endl << std::endl;

    const WrongAnimal* met = new WrongAnimal();
    const WrongAnimal* k = new WrongDog();
    const WrongAnimal* l = new WrongCat();
    std::cout << l->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->makeSound(); //will output the cat sound!
    l->makeSound();
    met->makeSound();
    delete k;
    delete l;
    delete met;
    return 0;
}