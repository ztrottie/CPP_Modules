/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:32:50 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 13:37:33 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(void): x_(0), y_(0) {
	// cout << "Default Point constructor called" << endl;
	return;
}

Point::Point(float const &x, float const &y): x_(x), y_(y) {
	// cout << "Parameters Point constructor called" << endl;
	return;
}

Point::Point(Point const &inst) {
	// cout << "Copy Point constructor called" << endl;
	*this = inst;
	return;
}

Point::~Point(void) {
	// cout << "Point destructor called" << endl;
	return;
}

Point &Point::operator=(Point const &rhs) {
	(void)rhs;
	// cout << "Copy Point assignment operator isnt usefull on const mate" << endl;
	return *this;
}

Fixed Point::getX(void) const {
	return this->x_;
}

Fixed Point::getY(void) const {
	return this->y_;
}
