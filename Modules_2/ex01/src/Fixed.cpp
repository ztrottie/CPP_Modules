/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:28:35 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/20 09:48:05 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::roundf;

Fixed::Fixed(void) : value_(0){
	cout << "Default constructor called" << endl;
	return;
}

Fixed::Fixed(Fixed const &inst) {
	cout << "Copy constructor called" << endl;
	*this = inst;
	return;
}

Fixed::Fixed(int const &nb) {
	cout << "Int constructor called" << endl;
	this->value_ = (nb << this->fractionalBits_);
	return;
}

Fixed::Fixed(float const &nb) {
	cout << "Float constructor called" << endl;
	this->value_ = (roundf(nb * (1 << this->fractionalBits_)));
	return;
}

Fixed::~Fixed(void) {
	cout << "Destructor called" << endl;
	return;
}

int Fixed::getRawBits(void) const {
	// cout << "getRawBits member function called" << endl;
	return this->value_;
}

void	Fixed::setRawBits(int const raw) {
	cout << "setRawBits member function called" << endl;
	this->value_ = raw;
}

float 	Fixed::toFloat(void) const {
	return ((float)this->value_ / (float)(1 << this->fractionalBits_));
}

int 	Fixed::toInt(void) const {
	return ((int)this->value_ >> this->fractionalBits_);
}

Fixed &Fixed::operator=(Fixed const &inst) {
	cout << "Copy assignment operator called" << endl;
	this->value_ = inst.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & inst) {
	o << inst.toFloat();
	return o;
}