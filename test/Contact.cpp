/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:45:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/28 23:05:20 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(): FirstName(""), LastName(""), NickName(""), PhoneNumber(""),
                    DarkestSecret("") {}

/*seters*/
void Contact::setFirstName(string FirstName)
{
    this->FirstName = FirstName;
}
void Contact::setLastName(string LastName)
{
    this->LastName = LastName;
}
void Contact::setNickName(string NickName)
{
    this->NickName = NickName;
}
void Contact::setPhoneNumber(string PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}
void Contact::setDarkestsecret(string Darkestsecret)
{
    this->DarkestSecret = Darkestsecret;
}

/*geters*/
string  Contact::getFirstName()
{
    return FirstName;
}
string  Contact::getLastName()
{
    return LastName;
}
string  Contact::getNickName()
{
    return NickName;
}
string  Contact::getPhoneNumber()
{
    return PhoneNumber;
}
string  Contact::getDarkestsecret()
{
    return DarkestSecret;
}

bool Contact::isEmpty()
{
    return FirstName.empty() || LastName.empty() || NickName.empty()
        || PhoneNumber.empty() || DarkestSecret.empty();
}