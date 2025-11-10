/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:39:19 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/09 14:39:20 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float sign(Point const a, Point const b, Point const p)
{
    float xa = a.getX().toFloat(); // xa
    float ya = a.getY().toFloat(); // ya
    float xb = b.getX().toFloat(); // xb
    float yb = b.getY().toFloat(); // ya
    float xp = p.getX().toFloat(); // xp
    float yp = p.getY().toFloat(); // yp
    return (xb - xa) * (yp - ya) - (yb - ya) * (xp - xa);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float valAB = sign(a, b, point);
    float valBC = sign(b, c, point);
    float valCA = sign(c , a, point); 
    bool left = (valAB > 0) && (valBC > 0) && (valCA > 0);
    bool rigth = (valAB < 0) && (valBC < 0) && (valCA < 0);
    if (left || rigth)
        return true;
   return false ;
}