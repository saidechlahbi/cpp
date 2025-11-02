/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:07:57 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/02 19:09:49 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const  int  Fixed::_fractionalBits = 8;

/*constructor*/

Fixed::Fixed(): _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    _fixedPointValue = n << _fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
    _fixedPointValue = (static_cast<int>(f)) << _fractionalBits;
    std::cout << "Float constructor called" << std::endl;
}

/*copy constructor*/
Fixed::Fixed(const Fixed& original)
{
    _fixedPointValue = original._fixedPointValue;
    std::cout << "Copy constructor called" << std::endl;
}

/*copy assignment operator overload*/
Fixed& Fixed::operator=(const Fixed& original)
{
    _fixedPointValue = original._fixedPointValue;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

/*destructor*/
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


/*seters and geters*/
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

/*to float and to int */

float   Fixed::toFloat() const
{
    return _fixedPointValue  >> 8;
}
int     Fixed::toInt() const
{
    return static_cast<float>(_fixedPointValue  >> 8);
}

/*stream*/

std::ostream& operator<<(std::ostream& os, Fixed const& f)
{
    os << f.toFloat();
    return os;
}