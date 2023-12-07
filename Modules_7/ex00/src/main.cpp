/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:11:33 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 13:19:06 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/whatever.hpp"

int main(void) {
	{
		int a = 1;
		int b = 2;
	
		std::cout << min(a, b) << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << "a: " << a << " b: " << b << std::endl;
		swap(a, b);
		std::cout << "a: " << a << " b: " << b << std::endl;
	}
	{
		float a = 1.5f;
		float b = 2.5f;
		std::cout << min(a, b) << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << "a: " << a << " b: " << b << std::endl;
		swap(a, b);
		std::cout << "a: " << a << " b: " << b << std::endl;
	}
	{
		double a = 1.5;
		double b = 2.5;
		std::cout << min(a, b) << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << "a: " << a << " b: " << b << std::endl;
		swap(a, b);
		std::cout << "a: " << a << " b: " << b << std::endl;
	}
}