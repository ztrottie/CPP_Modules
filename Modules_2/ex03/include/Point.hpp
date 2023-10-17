/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:31:27 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/17 14:29:50 by ztrottie         ###   ########.fr       */
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
	Fixed const x_;
	Fixed const y_;
public:
	Point(void);
	Point(float const &x, float const &y);
	Point(Fixed const &inst);
	~Point(void);

	Point &operator=(Fixed const &inst) const;
};
