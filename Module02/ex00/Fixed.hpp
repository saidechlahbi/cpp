/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:08:06 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/01 22:01:04 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class  Fixed
{
    private:
        int fixed_point_num;
        static const int frac_bits;
    public:
        Fixed();
        Fixed(const Fixed& original);
        Fixed& operator=(const Fixed& original);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif /*FIXED_HPP*/

