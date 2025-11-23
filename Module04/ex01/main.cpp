/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:24 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/23 22:01:16 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "WrongAnimal.hpp"

int main()
{
    int n = 6;
    Animal* zoo[n];

    for (int i = 0; i < n; ++i)
    {
        if (i < n/2)
            zoo[i] = new Dog();
        else    
            zoo[i] = new Cat();
    }

    std::cout << "-- make sounds --" << std::endl;
    for (int i = 0; i < n; ++i)
        zoo[i]->makeSound();

    std::cout << "-- delete all via base pointer (must call derived dtors) --" << std::endl;
    for (int i = 0; i < n; ++i)
        delete zoo[i];

    std::cout << "\n-- deep copy test --\n";
    Dog d1;
    Dog d2 = d1;
    d1 = d2;
  
    // std::cout << "\n----------------------------------------\n";

    
    // int k = 6;
    // WrongAnimal* voo[k];

    // for (int i = 0; i < k; ++i)
    // {
    //     if (i < k/2)
    //         voo[i] = new WrongDog();
    //     else    
    //         voo[i] = new WrongCat();
    // }

    // std::cout << "-- make sounds --" << std::endl;
    // for (int i = 0; i < k; ++i)
    //     voo[i]->makeSound();

    // std::cout << "-- delete all via base pointer (must call derived dtors) --" << std::endl;
    // for (int i = 0; i < k; ++i)
    //     delete voo[i];

    // std::cout << "\n-- deep copy test --\n";
    // Dog c1;
    // Dog a1 = c1;
    // c1 = a1;
    
    return 0;
}