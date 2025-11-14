/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:56:48 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/14 22:43:21 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory addresses:\n";
    std::cout << "  address of str      : " << &str << std::endl;
    std::cout << "  address held by ptr : " << stringPTR << std::endl;
    std::cout << "  address held by ref : " << &stringREF << std::endl;

    std::cout << "\nValues:\n";
    std::cout << "  str value            : " << str << std::endl;
    std::cout << "  value pointed by ptr : " << *stringPTR << std::endl;
    std::cout << "  value pointed by ref : " << stringREF << std::endl;

    return 0;
}