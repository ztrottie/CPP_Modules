/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:11:29 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 12:50:22 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type_("no_type") {
	std::cout << "Default AAnimal constructor " << std::endl;
}

AAnimal::AAnimal(const AAnimal &inst) {
	std::cout << "Copy AAnimal constructor " << std::endl;
	*this = inst;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &rhs) {
	std::cout << "AAnimal operator = overide" << std::endl;
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void	AAnimal::makeSound(void) const {
	std::cout << "**SILENCE**" << std::endl;
}

const std::string  &AAnimal::getType(void) const {
	return this->type_;
}
