/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:07:57 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/16 14:14:31 by sechlahb         ###   ########.fr       */
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
    _fixedPointValue = roundf(f * (1 << _fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

/*copy constructor*/
Fixed::Fixed(const Fixed& original)
{
    // _fixedPointValue = original._fixedPointValue;
    std::cout << "Copy constructor called" << std::endl;
    *this = original;
}

/*copy assignment operator overload*/
Fixed& Fixed::operator=(const Fixed& original)
{
    if (this != &original)
    {
        _fixedPointValue = original._fixedPointValue;
        std::cout << "Copy assignment operator called" << std::endl;
    }
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
    return (float)(_fixedPointValue)  / (1 << _fractionalBits);
}
int     Fixed::toInt() const
{
    return (_fixedPointValue  >> _fractionalBits);
}

/*stream*/

std::ostream& operator<<(std::ostream& os, Fixed const& f)
{
    os << f.toFloat();
    return os;
}