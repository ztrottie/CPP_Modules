/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:23:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/21 13:36:21 by ztrottie         ###   ########.fr       */
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

void	PmergeMe::listMerge

void	PmergeMe::listSort(int argc, char **argv) {
	std::list<int> list;
	std::string value;

	for (int i = 1; i < argc; i++) {
		int iValue;
		try {
			iValue = std::stoi(argv[i]);
			if (iValue < 0)
				throw std::exception();
		} catch (std::exception &e) {
			throw std::invalid_argument(std::string("Invalid input: ") + argv[i]);
		}
		list.push_back(iValue);
	}
	std::cout << "List version!" << std::endl;
	std::cout << "begin: ";
	std::list<int>::const_iterator it = list.begin();
	for (int i = 0; (it != list.end() && i < 10); i++) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void	PmergeMe::vectorSort(int argc, char **argv) {
	std::vector<int> vector;
	std::string value;
	
	for (int i = 1; i < argc; i++) {
		int iValue;
		try {
			iValue = std::stoi(argv[i]);
			if (iValue < 0)
				throw std::exception();
		} catch (std::exception &e) {
			throw std::invalid_argument(std::string("Invalid input: ") + argv[i]);
		}
		vector.push_back(iValue);
	}
	std::cout << "Vector version!" << std::endl;
	std::cout << "begin: ";
	std::vector<int>::const_iterator it = vector.begin();
	for (int i = 0; (it != vector.end() && i < 10); i++) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}