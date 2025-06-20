/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:59:10 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/09 20:34:39 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const Fixed x, const Fixed y);
	Point(const Point &newPoint);
	~Point();
	Point &operator=(const Point &oldPoint);
	const Fixed& getPointX() const;
	const Fixed& getPointY() const;

};

#endif // POINT_HPP