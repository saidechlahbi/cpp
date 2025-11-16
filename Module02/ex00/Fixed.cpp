/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:07:57 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/16 11:28:10 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const  int  Fixed::_frac_bits = 8;

Fixed::Fixed(): _fixed_point_num(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& original)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = original;
    //*this = original; // This will call getRawBits through operator=
    // _fixed_point_num = original.getRawBits();
}
Fixed& Fixed::operator=(const Fixed& original)
{
    if (this != &original)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        _fixed_point_num = original.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed_point_num;
}
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point_num = raw;
}