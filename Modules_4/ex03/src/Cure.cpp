/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:27:02 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/31 13:16:27 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {
	std::cout << "Default Cure constructor " << std::endl;
}

Cure::Cure(const Cure &inst) : AMateria(inst) {
	std::cout << "Copy Cure constructor " << std::endl;
	*this = inst;
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs) {
	(void)rhs;
	// std::cout << "that doesn't make sense" << std::endl;
	return *this;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	AMateria *clone = new Cure(*this);
	return clone;
} 