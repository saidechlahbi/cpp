/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:51 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/28 23:18:08 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib> 

PhoneBook::PhoneBook(): ContactCount(0), OldIndex(0) {}

string PhoneBook::TruncateField(string field) 
{
    if (field.length() > 10)
        return field.substr(0,9) + ".";
    return field;
}

void PhoneBook::AddContact( Contact& contact)
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
void PhoneBook::DisplayContacts() 
{
    cout << setw(10) << "Index" << "|"
        << setw(10) <<"First Name" << "|"
        << setw(10) << "Last Name" << "|"
        << setw(10) << "Nickname" << endl;
    for (int i = 0; i < ContactCount; i++)
    {
        cout << setw(10) << i << "|"
        << setw(10) << TruncateField(Contacts[i].getFirstName()) << "|"
        << setw(10) << TruncateField(Contacts[i].getLastName()) << "|"
        << setw(10) << TruncateField(Contacts[i].getNickName()) << endl;
    }
}
void PhoneBook::DisplayContactsDetails( int index) 
{
    cout << setw(10) << Contacts[index].getFirstName() << "|"
    << setw(10) <<  Contacts[index].getLastName() << "|"
    << setw(10) <<  Contacts[index].getNickName() << "|"
    << setw(10) <<  Contacts[index].getPhoneNumber() << "|"
    << setw(10) <<  Contacts[index].getDarkestsecret() << endl;
}
int PhoneBook::GetContactCount() 
{
    return ContactCount;
}