/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:51 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/18 17:32:31 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib> 

PhoneBook::PhoneBook(): ContactCount(0), OldIndex(0) {}

string PhoneBook::TruncateField(const string& field) const
{
    if (field.length() > 10)
        return field.substr(0,9) + ".";
    return field;
}

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
    cout << setw(10) << "Index" << "|"
        << setw(10) <<"First Name" << "|"
        << setw(10) << "Last Name" << "|"
        << setw(10) << "Nickname" << endl;
    for (int i; i < ContactCount; i++)
    {
        cout << setw(10) << i << "|"
        << setw(10) << TruncateField(Contacts[i].getFirstName()) << "|"
        << setw(10) << TruncateField(Contacts[i].getLastName()) << "|"
        << setw(10) << TruncateField(Contacts[i].getNickName()) << endl;
    }
}
void PhoneBook::DisplayContactsDetails(const int index) const
{
    cout << Contacts[index].getFirstName() << endl;
    cout << Contacts[index].getLastName() << endl;
    cout << Contacts[index].getNickName() << endl;
    cout << Contacts[index].getPhoneNumber() << endl;
    cout << Contacts[index].getDarkestsecret() << endl;
}
int PhoneBook::GetContactCount() const
{
    return ContactCount;
}