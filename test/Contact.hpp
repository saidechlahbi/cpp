/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:45:29 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/28 23:05:42 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP 

#include <iostream>
#include <string>
#include <cstdlib> 
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
        string  getFirstName();
        string  getLastName();
        string  getNickName();
        string  getPhoneNumber();
        string  getDarkestsecret();
        
        bool isEmpty();
};

#endif  /*CONTACT_HPP*/