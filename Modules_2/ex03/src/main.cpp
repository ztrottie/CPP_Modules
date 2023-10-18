/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:28:32 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 13:46:11 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

int main(void) {
	Point a(2, 2);
    Point b(4, 2);
    Point c(3, 4);

	Point p1(3, 3);
	Point p2(2.5f, 3);
	Point p3(3, 2.5f);
	
	if (bsp(a, b, c, p1))
		cout << "p1 is in the triangle!" << endl;
	else
		cout << "p1 is not in the triangle" << endl;

	if (bsp(a, b, c, p2))
		cout << "p2 is in the triangle!" << endl;
	else
		cout << "p2 is not in the triangle" << endl;

	if (bsp(a, b, c, p3))
		cout << "p3 is in the triangle!" << endl;
	else
		cout << "p3 is not in the triangle" << endl;
}