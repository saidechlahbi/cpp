/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:45:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/18 15:33:57 by sechlahb         ###   ########.fr       */
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
    this->DarkestSecret = DarkestSecret;
}

/*geters*/
string  Contact::getFirstName() const
{
    return FirstName;
}
string  Contact::getLastName() const
{
    return LastName;
}
string  Contact::getNickName() const
{
    return NickName;
}
string  Contact::getPhoneNumber() const
{
    return PhoneNumber;
}
string  Contact::getDarkestsecret() const
{
    return DarkestSecret;
}

bool Contact::isEmpty() const
{
    return FirstName.empty() || LastName.empty() || NickName.empty()
        || PhoneNumber.empty() || DarkestSecret.empty();
}