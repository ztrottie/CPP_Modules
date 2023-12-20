/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:23:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/20 14:23:49 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <iostream>

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