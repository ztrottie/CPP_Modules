/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:28:35 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 13:26:18 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::roundf;

Fixed::Fixed(void) : value_(0){
	// cout << "Default constructor called" << endl;
	return;
}

Fixed::Fixed(Fixed const &inst) {
	// cout << "Copy constructor called" << endl;
	*this = inst;
	return;
}

Fixed::Fixed(int const &nb) {
	// cout << "Int constructor called" << endl;
	this->value_ = (nb << this->fractionalBits_);
	return;
}

Fixed::Fixed(float const &nb) {
	// cout << "Float constructor called" << endl;
	this->value_ = (roundf(nb * (1 << this->fractionalBits_)));
	return;
}

Fixed::~Fixed(void) {
	// cout << "Destructor called" << endl;
	return;
}

int Fixed::getRawBits(void) const {
	// cout << "getRawBits member function called" << endl;
	return this->value_;
}

void	Fixed::setRawBits(int const raw) {
	// cout << "setRawBits member function called" << endl;
	this->value_ = raw;
}

float 	Fixed::toFloat(void) const {
	return ((float)this->value_ / (float)(1 << this->fractionalBits_));
}

int 	Fixed::toInt(void) const {
	return ((int)this->value_ >> this->fractionalBits_);
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	cout << "Copy assignment operator called" << endl;
	this->value_ = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

Fixed Fixed::operator+(Fixed const &rhs) const {
	Fixed result;

	result.setRawBits(this->value_ + rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	Fixed result;
	
	result.setRawBits(this->value_ - rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator*(Fixed const &rhs) const {
	Fixed result;

	result.setRawBits((this->value_ * rhs.getRawBits()) >> this->fractionalBits_);
	return (result);
}

Fixed Fixed::operator/(Fixed const &rhs) const {
	Fixed result;

	result.setRawBits((this->value_ * (1 << this->fractionalBits_) / rhs.getRawBits()));
	return (result);
}

bool Fixed::operator<(Fixed const &rhs) const {
	return (this->value_ < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const &rhs) const {
	return (this->value_ > rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const {
	return (this->value_ <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const {
	return (this->value_ >= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const {
	return (this->value_ == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const {
	return (this->value_ != rhs.getRawBits());
}

Fixed &Fixed::operator++() {
	++this->value_;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed cpy = *this;
	++this->value_;
	return cpy;
}

Fixed &Fixed::operator--() {
	--this->value_;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed cpy(*this);
	--this->value_;
	return cpy;
} 

Fixed	&Fixed::min(Fixed &inst1, Fixed &inst2) {
	if (inst1 < inst2)
		return inst1;
	return inst2;
}

const Fixed	&Fixed::min(Fixed const &inst1, Fixed const &inst2) {
	if (inst1 < inst2)
		return inst1;
	return inst2;
}

Fixed	&Fixed::max(Fixed &inst1, Fixed &inst2) {
	if (inst1 > inst2)
		return inst1;
	return inst2;
}

const Fixed	&Fixed::max(Fixed const &inst1, Fixed const &inst2) {
	if (inst1 > inst2)
		return inst1;
	return inst2;
}
