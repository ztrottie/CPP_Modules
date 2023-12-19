/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:15:31 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/19 14:15:52 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"
#include <iostream>

RPN::RPN() {
	std::cout << "Default RPN constructor " << std::endl;
}

RPN::RPN(const RPN &inst) {
	std::cout << "Copy RPN constructor " << std::endl;
	*this = inst;
}

RPN::~RPN() {
	std::cout << "RPN destructor" << std::endl;
}

RPN& RPN::operator=(const RPN &rhs) {
	std::cout << "RPN operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}