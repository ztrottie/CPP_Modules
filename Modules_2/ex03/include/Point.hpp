/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:31:27 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 12:03:44 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;

class Point
{
private:
	Fixed x_;
	Fixed const y_;
public:
	Point(void);
	Point(float const &x, float const &y);
	Point(Point const &inst);
	~Point(void);

	Point &operator=(Point const &inst);
	Fixed getX(void) const;
	Fixed getY(void) const;
};

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point);
