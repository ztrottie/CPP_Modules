/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:28:35 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/15 13:44:26 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;

const int Fixed::fractionalBits_ = 8;

Fixed::Fixed(void) : value_(0){
	cout << "Default constructor called" << endl;
	return;
}

Fixed::Fixed(Fixed const &inst) {
	cout << "Copy constructor called" << endl;
	*this = inst;
	return;
}

Fixed::~Fixed(void) {
	cout << "Destructor called" << endl;
	return;
}

int Fixed::getRawBits(void) const {
	cout << "getRawBits member function called" << endl;
	return this->value_;
}

Fixed &Fixed::operator=(Fixed const &inst) {
	cout << "Copy assignment operator called" << endl;
	this->value_ = inst.getRawBits();
	return *this;
}
