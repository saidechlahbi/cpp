/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:07:57 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/16 13:17:13 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;


int Fixed::getRawBits( void ) const
{
    return _fixedPointValue;
}
void Fixed::setRawBits( int const raw )
{
    _fixedPointValue = raw;
}
    
float   Fixed::toFloat() const
{
    return ((float)_fixedPointValue / (1 << _fractionalBits));
}
int     Fixed::toInt() const
{
    return _fixedPointValue >> _fractionalBits;
}


/*the Orthodox Canonical Form*/

Fixed::Fixed(): _fixedPointValue(0){}

Fixed::Fixed(const int n)
{
    _fixedPointValue = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
    _fixedPointValue = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& original)
{
    _fixedPointValue = original._fixedPointValue;
}

Fixed& Fixed::operator=(const Fixed& original)
{
    if (this != &original)
    {
        _fixedPointValue = original._fixedPointValue;
    }
    return *this;
}

Fixed::~Fixed(){}

/*comparison operators*/

bool Fixed::operator>(const Fixed& original) const
{
    if (_fixedPointValue > original._fixedPointValue)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed& original) const
{
    if (_fixedPointValue < original._fixedPointValue)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& original) const
{
    if (_fixedPointValue >= original._fixedPointValue)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed& original) const
{
    if (_fixedPointValue <= original._fixedPointValue)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed& original) const
{
    if (_fixedPointValue == original._fixedPointValue)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed& original) const
{
    if (_fixedPointValue != original._fixedPointValue)
        return true;
    return false;
}

/*arithmetic operators*/
Fixed Fixed::operator+(const Fixed& original)
{
    Fixed new_one;
    new_one._fixedPointValue = roundf((toFloat() + original.toFloat()) * 256);
    return new_one;
}
Fixed Fixed::operator-(const Fixed& original)
{
    Fixed new_one;
    new_one._fixedPointValue = roundf((toFloat() - original.toFloat()) * 256);
    return new_one;
}
Fixed Fixed::operator*(const Fixed& original)
{
    Fixed new_one;
    new_one._fixedPointValue = roundf((toFloat() * original.toFloat()) * 256);
    return new_one;
}
Fixed Fixed::operator/(const Fixed& original)
{
    Fixed new_one;
    new_one._fixedPointValue = roundf((toFloat() / original.toFloat()) * 256);
    return new_one;
}

/*increment and decrement*/

Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    _fixedPointValue++;
    return old;
}
Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    _fixedPointValue--;
    return old;
}
Fixed& Fixed::operator++()
{
    ++_fixedPointValue;
    return *this;
}
Fixed& Fixed::operator--()
{
    --_fixedPointValue;
    return *this;
}

/*min function*/
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

/*max function*/
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a._fixedPointValue > b._fixedPointValue)
        return a;
    return b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a._fixedPointValue > b._fixedPointValue)
        return a;
    return b;
}

std::ostream& operator<<(std::ostream& os, Fixed const& f)
{
    os << f.toFloat();
    return os;
}