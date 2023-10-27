/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:26:34 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 12:26:40 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"
#include <iostream>

Ice::Ice() {
	std::cout << "Default Ice constructor " << std::endl;
}

Ice::Ice(const Ice &inst) {
	std::cout << "Copy Ice constructor " << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs) {
	std::cout << "Ice operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}