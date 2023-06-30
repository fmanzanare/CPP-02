/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:27:55 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/30 12:38:03 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->_num = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called\n";
	this->_num = fixed._num;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called\n";
	this->_num = fixed._num;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (this->_num);
}

void	Fixed::setRawBits(int const raw) {
	this->_num = raw;
}
