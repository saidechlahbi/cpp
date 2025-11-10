/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:43:03 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/09 22:04:20 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const int x, const int y);
        Point(const Point& origin);
        Point& operator=(const Point& origin);
        ~Point();
        /*seters and geters*/
        Fixed getX() const;
        Fixed getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif /*POINT_HPP*/