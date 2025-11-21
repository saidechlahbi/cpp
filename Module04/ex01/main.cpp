/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:29:24 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/21 17:19:00 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

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
    return 0;
}