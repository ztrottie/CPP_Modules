/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:53:09 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 12:47:56 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Default Cat constructor " << std::endl;
	this->type_ = "Cat";
}

Cat::Cat(const Cat &inst) {
	std::cout << "Copy Cat constructor " << std::endl;
	*this = inst;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs) {
	std::cout << "Cat operator = overide" << std::endl;
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "**MEOW MEOW MEOW**" << std::endl;
}

const std::string  &Cat::getType(void) const {
	return this->type_;
}
