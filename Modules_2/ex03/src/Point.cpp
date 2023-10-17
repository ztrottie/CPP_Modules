/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:32:50 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/17 14:26:18 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/Point.hpp"

Point::Point(void): x_(0), y_(0) {
	cout << "Default Point constructor called" << endl;
	return;
}

Point::Point(float const &x, float const &y): x_(x), y_(y) {
	cout << "Parameters Point constructor called" << endl;
	return;
}

Point::Point(Fixed const &inst) {
	cout << "Copy Point constructor called" << endl;
	*this = inst;
	return;
}

Point::~Point(void) {
	cout << "Point destructor called" << endl;
	return;
}

Point &Point::operator=(Point const &inst) const {
	cout << "Copy Point constructor called" << endl;
	this->x_ = inst.x_;
	this->y_ = inst.y_;
	return *this;
}


