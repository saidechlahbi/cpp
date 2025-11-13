/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:41 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/13 13:00:41 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
    private:
        Contact Contacts[8];
        int ContactCount;
        int OldIndex;
        std::string TruncateField(const std::string field) const;
        
    public:
        PhoneBook();
        void AddContact(const Contact& contact);
        void DisplayContacts() const;
        void DisplayContactsDetails(const int index) const;
        int GetContactCount() const;
};

#endif /*PHONEBOOK_HPP*/

