/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:41 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/28 23:18:11 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <cstdlib> 
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact Contacts[8];
        int ContactCount;
        int OldIndex;
        string TruncateField(string field) ;
        
    public:
        PhoneBook();
        void AddContact(Contact& contact);
        void DisplayContacts() ;
        void DisplayContactsDetails(int index) ;
        int GetContactCount() ;
};

#endif /*PHONEBOOK_HPP*/

