/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:51 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/17 12:00:02 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(): ContactCount(0), OldIndex(0) {}

void PhoneBook::AddContact(const Contact& contact)
{
    if (ContactCount < 8)
    {
        Contacts[ContactCount] = contact;
        ContactCount++;
    }
    else
    {
        Contacts[OldIndex] = contact;
        OldIndex = (OldIndex + 1) % 8;
    }
}
void PhoneBook::DisplayContacts() const
{
    
}
void PhoneBook::DisplayContactsDetails(int index)
{
    
}
int PhoneBook::GetContactCount() const
{
        
}