/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:08:06 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/16 10:47:01 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class  Fixed
{
    private:
        int _fixed_point_num;
        static const int _frac_bits;
    public:
        Fixed();
        Fixed(const Fixed& original);
        Fixed& operator=(const Fixed& original);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif /*FIXED_HPP*/

