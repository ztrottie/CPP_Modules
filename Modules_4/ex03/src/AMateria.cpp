/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:08:06 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 10:08:13 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include <iostream>

AMateria::AMateria() {
	std::cout << "Default AMateria constructor " << std::endl;
}

AMateria::AMateria(const AMateria &inst) {
	std::cout << "Copy AMateria constructor " << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &rhs) {
	std::cout << "AMateria operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}