/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:39:19 by sechlahb          #+#    #+#             */
/*   Updated: 2025/11/16 13:15:13 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static long sign(Point const a, Point const b, Point const p)
{
    long xa = a.getX().toFloat(); // xa
    long ya = a.getY().toFloat(); // ya
    long xb = b.getX().toFloat(); // xb
    long yb = b.getY().toFloat(); // ya
    long xp = p.getX().toFloat(); // xp
    long yp = p.getY().toFloat(); // yp
    return (xb - xa) * (yp - ya) - (yb - ya) * (xp - xa);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    long valAB = sign(a, b, point);
    long valBC = sign(b, c, point);
    long valCA = sign(c , a, point); 
    bool left = (valAB > 0) && (valBC > 0) && (valCA > 0);
    bool rigth = (valAB < 0) && (valBC < 0) && (valCA < 0);
    if (left || rigth)
        return true;
   return false ;
}