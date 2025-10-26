/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:20:14 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/26 15:20:15 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
}


void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout <<  "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{

    if (level == "DEBUG")
    {
        void (Harl::*p1)(void) = &Harl::debug;
        (this->*p1)();
    }
    else  if (level == "INFO")
    {
        void (Harl::*p1)(void) = &Harl::info;
        (this->*p1)();
    }
    else  if (level == "WARNING")
    {
        void (Harl::*p1)(void) = &Harl::warning;
         (this->*p1)();
    }
    else  if (level == "ERROR")
    {
        void (Harl::*p1)(void) = &Harl::error;
        (this->*p1)();
    }
    return ;
}  
