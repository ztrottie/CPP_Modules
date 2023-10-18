/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:57:41 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 13:32:18 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Fixed	getArea(Point const &a, Point const &b, Point const &c) {
	Fixed triangleArea((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0f);
	if (triangleArea < 0) {
		return (triangleArea * -1);
	}
	return (triangleArea);
}

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point) {
	Fixed triangleArea(getArea(a, b, c));
	Fixed area1(getArea(point, b, c));
	Fixed area2(getArea(point, a, c));
	Fixed area3(getArea(point, a, b));
	Fixed total = area1 + area2 + area3;
	
	// cout << "triangleArea: " << triangleArea << endl;
	// cout << "Area1: " << area1 << endl;
	// cout << "Area2: " << area2 << endl;
	// cout << "Area3: " << area3 << endl;
	// cout << "total: " << total << endl;
	if (total != triangleArea || area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	return true;
}