/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:48:15 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/16 13:14:02 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point(): _x(0), _y(0){}
Point::Point(const int a, const int b): _x(a), _y(b){}

/*avoiding shallow copy*/
Point::Point(const Point& origin): _x(origin._x), _y(origin._y) {}

Point& Point::operator=(const Point& origin)
{
    (void)origin;
    return *this;
}
Point::~Point(){}


/*geters*/
Fixed Point::getX() const
{
    return _x;
}

Fixed Point::getY() const
{
    return _y;
}
