/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:53:11 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 12:47:47 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include <iostream>

Dog::Dog() {
	this->type_ = "Dog";
	std::cout << "Default Dog constructor " << std::endl;
}

Dog::Dog(const Dog &inst) {
	std::cout << "Copy Dog constructor " << std::endl;
	*this = inst;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs) {
	std::cout << "Dog operator = overide" << std::endl;
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "**BARK BARK BARK**" << std::endl;
}

const std::string  &Dog::getType(void) const {
	return this->type_;
}
