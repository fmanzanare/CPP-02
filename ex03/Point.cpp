/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:35:53 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/30 20:52:59 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &point) : _x(point._x), _y(point._y) {}

Point &Point::operator=(const Point &point) {
	(void)point;
	// No way to implemment this operator with const attributes.
	return (*this);
}

Point::~Point() {}

Fixed Point::getX(void) {
	return (this->_x);
}

Fixed Point::getY(void) {
	return (this->_y);
}
