/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/18 17:39:57 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "PhoneBook.hpp"
#include  "Contact.hpp"

Contact CreateContact()
{
    Contact new_contact;
    string input;
    
    cout << "Enter first name" << endl;
    getline(cin, input);
    new_contact.setFirstName(input);

    cout << "Enter last name" << endl;
    getline(cin, input);
    new_contact.setLastName(input);

    cout << "Enter nickname" << endl;
    getline(cin, input);
    new_contact.setNickName(input);

    cout << "Enter phone number" << endl;
    getline(cin, input);
    new_contact.setPhoneNumber(input);

    cout << "Enter darkest secret" << endl;
    getline(cin, input);
    new_contact.setDarkestsecret(input);
    
    return new_contact;
}

int main()
{
    string command;
    PhoneBook new_phonebook;
    cout << "<------ Welcom to my awesome phonebook ------>" << endl;
    cout << "Availabe commands: ADD, SEARCH, EXIT" << endl;
    while (true)
    {
        cout << "> ";
        getline(cin, command);
        if (command == "ADD")
        {
            Contact new_contact = CreateContact();
            cout  <<  new_contact.isEmpty() << endl;
            if (new_contact.isEmpty())
                cout << "Error: All the fields must br filled! contact not saved" << endl;
            else
            {
                new_phonebook.AddContact(new_contact);
                cout <<  "Contact added successfully!" << endl;
            }
        }
        else if (command == "SEARCH")
        {
            if (new_phonebook.GetContactCount() == 0)
            {
                cout << "Phonebook is empty!" << endl;
                continue;
            }
            new_phonebook.DisplayContacts();
            cout << "Enter the contact index: ";
            string index_s;
            getline(cin, index_s);
            int index = atoi(index_s.c_str());
            for (int i; i < index_s.length(); i++)
            {
                if (!isdigit(index_s[i]) || index > 10 || index < 0)
                {
                    cout << "Invalid input: please enter a valid number!" << endl;  
                    continue;   
                }
            }
            new_phonebook.DisplayContactsDetails(index);
        }
        else if (command == "EXIT")
        {
            cout << "Goodbay!" << endl;
            break;
        }
        else
            cout << "Invalid command! Use ADD, SEARCH or EXIT" << endl;
    }
    return 0;
}