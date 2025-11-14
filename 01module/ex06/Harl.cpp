/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:20:25 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/26 15:20:26 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUF ]" << std::endl;
    std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
}


void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout <<  "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int levelIndex = -1;
    
    // Convert string to integer
    if (level == "DEBUG")
        levelIndex = 0;
    else if (level == "INFO")
        levelIndex = 1;
    else if (level == "WARNING")
        levelIndex = 2;
    else if (level == "ERROR")
        levelIndex = 3;
    
    // Now switch on the integer
    switch (levelIndex)
    {
        case 0:
        {
            void (Harl::*p1)(void) = &Harl::debug;
            (this->*p1)();
        }
        // fall through
        case 1:
        {
            void (Harl::*p2)(void) = &Harl::info;
            (this->*p2)();
        }
        // fall through
        case 2:
        {
            void (Harl::*p3)(void) = &Harl::warning;
            (this->*p3)();
        }
        // fall through
        case 3:
        {
            void (Harl::*p4)(void) = &Harl::error;
            (this->*p4)();
            break;
        }
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}