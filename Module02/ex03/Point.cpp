/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:48:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/09 22:04:01 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){}
Point::Point(const int a, const int b): x(a), y(b){}
Point::Point(const Point& origin)
{
    x.setRawBits(origin.getX().getRawBits());
    y.setRawBits(origin.getY().getRawBits());
}
Point& Point::operator=(const Point& origin)
{
    x.setRawBits(origin.getX().getRawBits());
    y.setRawBits(origin.getY().getRawBits());
    return *this;
}
Point::~Point(){}


Fixed Point::getX() const
{
    return x;
}
void Point::setX(const Fixed& a)
{
    x = a;
}
Fixed Point::getY() const
{
    return y;
}
void Point::setY(const Fixed& b)
{
    y = b;
}