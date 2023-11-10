/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:26:34 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/31 13:16:21 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
	std::cout << "Default Ice constructor " << std::endl;
}

Ice::Ice(const Ice &inst) : AMateria(inst) {
	std::cout << "Copy Ice constructor " << std::endl;
	*this = inst;
}

Ice::~Ice() {
	std::cout << "Ice destructor" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs) {
	(void)rhs;
	// std::cout << "that doesn't make sense" << std::endl;
	return *this;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
	AMateria *clone = new Ice(*this);
	return clone;
} 

