/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:39:38 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/14 17:34:48 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main (int ac, char **av)
{
    if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>\n";
        return 1;
    }
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream infile(av[1], std::ios::in);
    if (!infile.is_open())
    {
        std::cerr << "Failed to open " << av[1] << std::endl;
        return 1;
    }
    std::string rep = av[1];
    rep = rep + ".replace";
    std::ofstream outfile(rep.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Failed to open " << rep << std::endl;
        return 1;
    }
    std::string buffer;
    while (getline(infile, buffer))
    {
        outfile << content_rep(buffer, s1, s2) << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
