/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:59:44 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/09 23:59:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed ft_calculateArea(Point const a, Point const b, Point const c)
{
	Fixed Area;

	Area = a.getPointX() * (b.getPointY() - c.getPointY()) +
		   b.getPointX() * (c.getPointY() - a.getPointY()) +
		   c.getPointY() * (a.getPointY() - b.getPointY());

	if (Area < Fixed(0))
		Area *Fixed(-1);
	return (Area / Fixed(2));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	(void)point;
	Fixed Area = ft_calculateArea(a, b, c);
	std::cout << "Area = " << b.getPointX().toFloat();
	return (true);
}
