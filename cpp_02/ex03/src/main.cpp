/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:25:03 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 01:05:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(0), Fixed(6));
	Point c(Fixed(8), Fixed(0));
	Point point(Fixed(0), Fixed(4));

	if (bsp(a, b, c, point))
		std::cout << "The point is in the area" << std::endl;
	else
		std::cout << "The point is NOT in the area" << std::endl;

	return 0;
}
