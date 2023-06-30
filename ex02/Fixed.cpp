/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:27:55 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/30 19:00:40 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	//std::cout << "Default constructor called\n";
	this->_num = 0;
}

Fixed::Fixed(int num) {
	//std::cout << "Int constructor called\n";
	this->_num = (num << this->_bits);
}

Fixed::Fixed(float num) {
	//std::cout << "Float constructor called\n";
	this->_num = (int)roundf(num * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &fixed) {
	//std::cout << "Copy constructor called\n";
	this->_num = fixed._num;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	//std::cout << "Assignation operator called\n";
	this->_num = fixed._num;
	return (*this);
}

bool Fixed::operator>(const Fixed &fixed) const {
	return (this->_num > fixed._num);
}

bool Fixed::operator<(const Fixed &fixed) const {
	return (this->_num < fixed._num);
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return (this->_num >= fixed._num);
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return (this->_num <= fixed._num);
}

bool Fixed::operator==(const Fixed &fixed) const {
	return (this->_num == fixed._num);
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return (this->_num != fixed._num);
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	Fixed res(toFloat() + fixed.toFloat());
	return (res);
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	Fixed res(toFloat() - fixed.toFloat());
	return (res);
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	Fixed res(toFloat() * fixed.toFloat());
	return (res);
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	Fixed res(toFloat() / fixed.toFloat());
	return (res);
}

Fixed &Fixed::operator++(void) {
	this->_num++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed res(*this);
	_num++;
	return (res);
}

Fixed &Fixed::operator--(void) {
	this->_num--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed res(*this);
	_num--;
	return (res);
}

Fixed::~Fixed() {
	//std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called\n";
	return (this->_num);
}

void	Fixed::setRawBits(int const raw) {
	this->_num = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)this->_num / (1 << this->_bits));
}

int		Fixed::toInt(void) const {
	return (this->_num >> this->_bits);
}

Fixed	Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed	Fixed::min(const Fixed &f1, const Fixed &f2) {
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed	Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed	Fixed::max(const Fixed &f1, const Fixed &f2) {
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	return (os << fixed.toFloat());
}
