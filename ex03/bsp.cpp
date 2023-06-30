/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:58:10 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/30 20:40:09 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	getArea(Point v1, Point v2, Point v3) {
	float	area;

	area = v1.getX().toFloat() * (v3.getY().toFloat() - v2.getY().toFloat())
		+ v2.getX().toFloat() * (v1.getY().toFloat() - v3.getY().toFloat())
		+ v3.getX().toFloat() * (v2.getY().toFloat() - v1.getY().toFloat());

	if (area < 0)
		area *= -1;

	return (area);
}

bool	bsp(Point v1, Point v2, Point v3, Point p) {
	float triangleA = getArea(v1, v2, v3);
	float v1_v2_pA = getArea(v1, v2, p);
	float v1_v3_pA = getArea(v1, v3, p);
	float v2_v3_pA = getArea(v2, v3, p);

	if (v1_v2_pA == 0 || v1_v3_pA == 0 || v2_v3_pA == 0)
		return (false);

	float sumA = v1_v2_pA + v1_v3_pA + v2_v3_pA;
	if (triangleA == sumA)
		return (true);

	return (false);
}
