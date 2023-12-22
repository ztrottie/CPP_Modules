/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:23:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/22 14:35:22 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <exception>
#include <iostream>
#include <list>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

PmergeMe::PmergeMe() {
	std::cout << "Default PmergeMe constructor " << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &inst) {
	std::cout << "Copy PmergeMe constructor " << std::endl;
	*this = inst;
}

PmergeMe::~PmergeMe() {
	std::cout << "PmergeMe destructor" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &rhs) {
	std::cout << "PmergeMe operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}

void PmergeMe::sort(int argc, char **argv) {
	int values[argc - 1];

	try {
		parsing(argc, argv, values);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
}

void	PmergeMe::parsing(int argc, char **argv, int *values) {
	for (int i = 1; i < argc; i++) {
		try {
			values[i - 1] = std::stoi(argv[i]);
			if (values[i - 1] < 0)
				throw std::exception();
		} catch (std::exception &e) {
			throw std::invalid_argument("Error!");
		}
	}
}