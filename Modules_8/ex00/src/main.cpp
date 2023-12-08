/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:59:21 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 12:37:05 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <vector>
#include <iostream>
#include "../include/easyfind.hpp"

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define PNK "\x1B[38;5;206m"
#define ORNG "\x1B[38;2;255;165;0m"
#define RESET "\x1B[0m"

int main() {
	{
		std::cout << "First test!" << std::endl << std::endl;
		std::vector<int> test;
		std::vector<int>::const_iterator iter;
		test.push_back(10);
		test.push_back(20);
		test.push_back(30);
		test.push_back(40);
		std::cout << YEL << "Trying to find 20 in a vector {10, 20, 30, 40}" << RESET << std::endl;
		try {
			iter = easyfind(test, 20);
			std::cout << GRN << "The value as been found" << RESET << std::endl;
		} catch (std::invalid_argument &e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "Second test!" << std::endl << std::endl;
		std::vector<int> test;
		std::vector<int>::const_iterator iter;
		test.push_back(10);
		test.push_back(20);
		test.push_back(30);
		test.push_back(40);
		std::cout << YEL << "Trying to find 50 in a vector {10, 20, 30, 40}" <<RESET << std::endl;
		try {
			iter = easyfind(test, 50);
			std::cout << GRN << "The value as been found" << RESET << std::endl;
		} catch (std::invalid_argument &e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
		std::cout << std::endl << std::endl;
	}
}