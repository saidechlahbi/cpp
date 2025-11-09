/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:48:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/09 21:49:43 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed::Fixed(): x(0), y(0){}
Fixed::Point(const int a, const int b): x(a), y(b){}
Point::Point(const Point& origin)
{
    x.setRawBits(origin.getRawBits());
}
Point& Point::operator=(const Point& origin)
{
    x.setRawBits(origin.getRawBits());
    return *this;
}
Point::~Point(){}


Fixed Fixed::getX() const
{
    return x;
}
void Fixed::setX(Fixed a)
{
    x = a;
}
Fixed Fixed::getY() const
{
    return y;
}
void Fixed::setX(Fixed b)
{
    y = b;
}