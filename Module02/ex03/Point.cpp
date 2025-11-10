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

/*avoiding shallow copy*/
Point::Point(const Point& origin): x(origin.x), y(origin.y) {}

Point& Point::operator=(const Point& origin)
{
    (void)origin;
    return *this;
}
Point::~Point(){}


/*geters*/
Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}
