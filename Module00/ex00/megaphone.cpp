/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:33:27 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/08 18:21:42 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int j;
    std::string argv;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        j = 1;
        while (j < ac)
        {
            argv = av[j];
            for (size_t i = 0; i < argv.length(); i++)
                std::cout << static_cast<char>(std::toupper(argv[i]));
            j++;
        }
        std::cout << std::endl ;
    }
    return 0;
}