/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:45:29 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/17 11:17:01 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP 

#include <iostream>
#include <string>

using  namespace std;


class Contact {
    private:
        string FirstName;
        string LastName;
        string NickName;
        string PhoneNumber;
        string DarkestSecret;
    public:
        /*constructor*/
        Contact();
        /*seters*/
        void    setFirstName(string FirstName);
        void    setLastName(string LastName);
        void    setNickName(string NickName);
        void    setPhoneNumber(string PhoneNumber);
        void    setDarkestsecret(string Darkestsecret);
        /*geters*/
        string  getFirstName() const;
        string  getLastName() const;
        string  getNickName() const;
        string  getPhoneNumber() const;
        string  getDarkestsecret() const;
};

#endif  /*CONTACT_HPP*/