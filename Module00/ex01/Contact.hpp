/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:45:29 by sechlahb          #+#    #+#             */
/*   Updated: 2025/10/28 23:03:36 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP 

#include <iostream>
#include <string>
#include <cstdlib> 


class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        /*constructor*/
        Contact();
        /*seters*/
        void    setFirstName(std::string FirstName);
        void    setLastName(std::string LastName);
        void    setNickName(std::string NickName);
        void    setPhoneNumber(std::string PhoneNumber);
        void    setDarkestsecret(std::string Darkestsecret);
        /*geters*/
        std::string  getFirstName() const;
        std::string  getLastName() const;
        std::string  getNickName() const;
        std::string  getPhoneNumber() const;
        std::string  getDarkestsecret() const;
        
        bool isEmpty() const;
};

#endif  /*CONTACT_HPP*/