/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:08:06 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/02 19:07:19 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
    
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    
        float   toFloat() const;
        int     toInt() const;
        
};
    
std::ostream& operator<<(std::ostream& os, Fixed const& f);

#endif /*FIXED_HPP*/

