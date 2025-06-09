/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:59:44 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 00:12:51 by nquecedo         ###   ########.fr       */
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

	return (area / Fixed(2));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	(void)point;
	ft_calculateArea(a, b, c);
	std::cout << "Area = " << ft_calculateArea(a, b, c);
	return (true);
}
