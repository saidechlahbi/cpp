/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/18 21:51:52 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "PhoneBook.hpp"
#include  "Contact.hpp"

#include <sstream>
Contact CreateContact()
{
    Contact new_contact;
    std::string input;
    
    std::cout << "Enter first name" << std::endl;
    getline(std::cin, input);
    new_contact.setFirstName(input);

    std::cout << "Enter last name" << std::endl;
    getline(std::cin, input);
    new_contact.setLastName(input);

    std::cout << "Enter nickname" << std::endl;
    getline(std::cin, input);
    new_contact.setNickName(input);

    std::cout << "Enter phone number" << std::endl;
    getline(std::cin, input);
    new_contact.setPhoneNumber(input);

    std::cout << "Enter darkest secret" << std::endl;
    getline(std::cin, input);
    new_contact.setDarkestsecret(input);
    
    return new_contact;
}

int main()
{
    std::string command;
    PhoneBook new_phonebook;
    std::cout << "<------ Welcom to my awesome phonebook ------>" << std::endl;
    std::cout << "Availabe commands: ADD, SEARCH, EXIT" << std::endl;
    while (true)
    {
        std::cout << "> ";
        getline(std::cin, command);
        if (command == "ADD")
        {
            Contact new_contact = CreateContact();
            if (new_contact.isEmpty())
                std::cout << "Error: All the fields must be filled! contact not saved" << std::endl;
            else
            {
                new_phonebook.AddContact(new_contact);
                std::cout <<  "Contact added successfully!" << std::endl;
            }
        }
        else if (command == "SEARCH")
        {
            if (new_phonebook.GetContactCount() == 0)
            {
                std::cout << "Phonebook is empty!" << std::endl;
                continue;
            }
            new_phonebook.DisplayContacts();
            std::cout << "Enter the contact index: ";
            std::string index_s;
            getline(std::cin, index_s);
            std::stringstream value(index_s);
            bool is_valid = true;
            int index;
            value >> index;
            for (std::string::size_type i = 0; i < index_s.length(); i++)
            {
                if (!std::isdigit(index_s[i]))
                {
                    std::cout << "Invalid input: please enter a valid number!" << std::endl;  
                    is_valid = false;
                    break;
                }
            }
            if (!is_valid || index_s.empty())
            {
                continue;    
            }
            if (index < 0 || index > 7)
            {
                std::cout << "Invalid index: please enter a number between 0 and 7!" << std::endl;
                continue;    
            }
            new_phonebook.DisplayContactsDetails(index);
        }
        else if (command == "EXIT")
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else
            std::cout << "Invalid command! Use ADD, SEARCH or EXIT" << std::endl;
    }
    return 0;
}