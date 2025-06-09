/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:25:03 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/09 23:49:49 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);


int main( void ) {
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(2), Fixed(2));
	Point c(Fixed(0), Fixed(6));
	Point point(Fixed(0), Fixed(1));
	bsp(a,b,c,point);

return 0;
}
