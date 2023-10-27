/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:27:02 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 12:27:08 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"
#include <iostream>

Cure::Cure() {
	std::cout << "Default Cure constructor " << std::endl;
}

Cure::Cure(const Cure &inst) {
	std::cout << "Copy Cure constructor " << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs) {
	std::cout << "Cure operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}