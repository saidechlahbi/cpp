/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:20:32 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/26 15:20:33 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error : the number of arguments is wrong!" << std::endl;
        return 1;
    }
    
    Harl boo;
    boo.complain(av[1]);
    return 0;
}