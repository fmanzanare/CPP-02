/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:40:23 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/30 20:53:50 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	// Triangle 1:
	Point v1(0, 0);
	Point v2(0, 2);
	Point v3(2, 1);
	Point p(1, 0.5);

	bool res = bsp(v1, v2, v3, p);
	std::cout << res << "\n";

	return (0);
}
