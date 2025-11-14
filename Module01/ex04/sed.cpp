/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:41:08 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/14 16:32:57 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string content_rep(std::string line , std::string s1, std::string s2)
{
    std::string result;
    size_t last_pos = 0;
    std::size_t pos = line.find(s1);

    while(pos > 0)
    {
        result.append(line, last_pos, pos - last_pos);
        result.append(s2);
        last_pos = pos + s1.length();
        pos = line.find(s1, last_pos);
    }
    result.append(line, last_pos, line.length() - last_pos);
    return result;
}