/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:39:38 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/26 18:46:51 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


std::string replaceAll(std::string line, std::string s1, std::string s2)
{
    std::string result;
    std::size_t last_pos = 0;
    std::size_t pos = line.find(s1);
    
    while (pos != std::string::npos)
    {
        result.append(line, last_pos, pos - last_pos);
        result.append(s2);
        last_pos = pos + s1.length();
        pos = line.find(s1, last_pos);
    }
    result.append(line, last_pos, line.length() - last_pos);
    return result;
}

int main (int ac, char **av)
{
    if (ac == 4)
    {
        if (av[1][0] == 0 || av[2][0] == 0 ||av[3][0] == 0)
        {
            std::cerr << "Error: the argument must have value!" << std::endl;
            return 1;
        }
        std::fstream inputfile; 
        std::fstream outputfile ;
        std::string filename = av[1];
        std::string filereplace = av[1];
        filereplace = filereplace + ".replace";
        std::string line;
        
        inputfile.open(filename, std::ios::in);
        if (!inputfile)
        {
            std::cerr << "Error: could not open the inputfile." << std::endl;
            return 1;
        }

        outputfile.open(filereplace, std::ios::out);
        if (!outputfile)
        {
            std::cerr << "Error: could not open the outputfile." << std::endl;
            inputfile.close();
            return 1;
        }
        
        while (std::getline(inputfile, line))
        {
            std::cout << line << std::endl;
            std::cout << replaceAll(line, av[2], av[3]) << std::endl << std::endl;
        }
        inputfile.close();
        outputfile.close();
        return 0;
    }
    std::cerr << "Error: invalid arguments!" << std::endl;
    return 1;   
}