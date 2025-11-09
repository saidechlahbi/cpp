/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:43:03 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/09 21:49:46 by sechlahb         ###   ########.fr       */
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
        void setX(Fixed a);
        Fixed getY() const;
        void setX(Fixed b);
};

#endif /*POINT_HPP*/