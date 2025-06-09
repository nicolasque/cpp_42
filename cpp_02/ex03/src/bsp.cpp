/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:59:44 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 01:04:41 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed ft_calculateArea(Point const a, Point const b, Point const c)
{
	Fixed area;

	area = a.getPointX() * (b.getPointY() - c.getPointY()) +
		   b.getPointX() * (c.getPointY() - a.getPointY()) +
		   c.getPointX() * (a.getPointY() - b.getPointY());

	if (area < Fixed(0))
		area = area * Fixed(-1);

	area = area / Fixed(2);
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed originalArea, adedAreaa;
	originalArea = ft_calculateArea(a, b, c);
	adedAreaa = ft_calculateArea(point, b, c) +
				ft_calculateArea(a, point, c) +
				ft_calculateArea(a, b, point);

	if (ft_calculateArea(point, b, c) == Fixed(0) || ft_calculateArea(a, point, c) == Fixed(0) || ft_calculateArea(a, b, point) == Fixed(0))
		return (false);
	if (originalArea == adedAreaa)
		return (true);
	return (false);
}
