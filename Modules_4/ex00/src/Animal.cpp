/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:11:29 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 12:50:22 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include <iostream>

Animal::Animal() : type_("no_type") {
	std::cout << "Default Animal constructor " << std::endl;
}

Animal::Animal(const Animal &inst) {
	std::cout << "Copy Animal constructor " << std::endl;
	*this = inst;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

Animal& Animal::operator=(const Animal &rhs) {
	std::cout << "Animal operator = overide" << std::endl;
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "**SILENCE**" << std::endl;
}

const std::string  &Animal::getType(void) const {
	return this->type_;
}
