/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:45:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/28 23:03:39 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(): FirstName(""), LastName(""), NickName(""), PhoneNumber(""),
                    DarkestSecret("") {}

/*seters*/
void Contact::setFirstName(std::string FirstName)
{
    this->FirstName = FirstName;
}
void Contact::setLastName(std::string LastName)
{
    this->LastName = LastName;
}
void Contact::setNickName(std::string NickName)
{
    this->NickName = NickName;
}
void Contact::setPhoneNumber(std::string PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}
void Contact::setDarkestsecret(std::string Darkestsecret)
{
    this->DarkestSecret = Darkestsecret;
}

/*geters*/
std::string  Contact::getFirstName() const
{
    return FirstName;
}
std::string  Contact::getLastName() const
{
    return LastName;
}
std::string  Contact::getNickName() const
{
    return NickName;
}
std::string  Contact::getPhoneNumber() const
{
    return PhoneNumber;
}
std::string  Contact::getDarkestsecret() const
{
    return DarkestSecret;
}

bool Contact::isEmpty() const
{
    return FirstName.empty() || LastName.empty() || NickName.empty()
        || PhoneNumber.empty() || DarkestSecret.empty();
}