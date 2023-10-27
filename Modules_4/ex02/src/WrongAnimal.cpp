/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:05:08 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 13:29:34 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type_("no_wrong_type") {
	this->type_ = "WrongCat";
	std::cout << "Default WrongAnimal constructor " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &inst) {
	std::cout << "Copy WrongAnimal constructor " << std::endl;
	*this = inst;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "WrongAnimal operator = overide" << std::endl;
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "**WRONG SILENCE**" << std::endl;
}