/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:41 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/17 11:56:59 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook{
    private:
        Contact Contacts[8];
        int ContactCount;
        int OldIndex;
        
    public:
        PhoneBook();
        void AddContact(const Contact& contact);
        void DisplayContacts() const;
        void DisplayContactsDetails(int index) const;
        int GetContactCount() const;
}

#endif /*PHONEBOOK_HPP*/

