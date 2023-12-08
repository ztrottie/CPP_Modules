/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:47:41 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 11:37:06 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include <exception>


int main() {
	{
		Array<int> array(1);
		for (int i = 0; i < 10; i++){
			try {
				array[i] = i;
			} catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		for (int i = 0; i < 10; i++) {
			try {
				std::cout << array[i] << std::endl;
			} catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		try {
			array[-10] = 10;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		Array<int> intArray;
		Array<std::string> array(2);
		array[0] = "salut";
		array[1] = "bonjour";
		for (int i = 0; i < 2; i++)
			std::cout << array[i] << std::endl;
	}
}