/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:08:06 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/16 13:16:49 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class  Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float f);
        Fixed(const Fixed& original);
        Fixed& operator=(const Fixed& original);
        ~Fixed();

        /* comparison operators*/
        bool operator>(const Fixed& original) const;
        bool operator<(const Fixed& original) const;
        bool operator>=(const Fixed& original)const;
        bool operator<=(const Fixed& original) const;
        bool operator==(const Fixed& original) const;
        bool operator!=(const Fixed& original) const;

        /*arithmetic operators*/
        Fixed operator+(const Fixed& original);
        Fixed operator-(const Fixed& original);
        Fixed operator*(const Fixed& original);
        Fixed operator/(const Fixed& original);
    
        /*increment and decrement*/
        Fixed operator++(int); // i++
        Fixed operator--(int); // i--
        Fixed& operator++(); // ++i
        Fixed& operator--(); // --i

        /*min*/
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b); 
        
        /*max*/
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    
        float   toFloat() const;
        int     toInt() const;
        
};

std::ostream& operator<<(std::ostream& os, Fixed const& f);

#endif /*FIXED_HPP*/
