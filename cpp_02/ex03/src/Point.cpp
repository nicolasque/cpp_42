/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:59:30 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/06 20:11:50 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
}

Point::Point(const Point &newPoint) : _x(newPoint._x), _y(newPoint._y)
{

}

Point &Point::operator=(const Point &oldPoint)
{
	return (*this);
}
