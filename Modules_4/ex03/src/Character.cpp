/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:24:49 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/29 13:34:34 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include <iostream>

Character::Character() {
	std::cout << "Default Character constructor " << std::endl;
}

Character::Character(const std::string &name) : name_(name) {
	std::cout << "Default Character constructor " << std::endl;
}

Character::Character(const Character &inst) {
	std::cout << "Copy Character constructor " << std::endl;
	*this = inst;
}

Character::~Character() {
	std::cout << "Character destructor" << std::endl;
}

Character& Character::operator=(const Character &rhs) {
	std::cout << "Character operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}

std::string const & Character::getName() const {
	return this->name_;
}

void Character::equip(AMateria* m) {
	if (nbMateria_ != 4) {
		inventory_[nbMateria_ - 1] = m;
		nbMateria_++;	
	}
	else
		std::cout << "Inventory of " << name_ << " is full!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx > nbMateria_ - 1 || idx < 0)
		std::cout << "Wrong index buddy" << std::endl;
	else {
		inventory_[idx] = NULL;
		nbMateria_--;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx > nbMateria_ - 1 || idx < 0)
		std::cout << "Wrong index buddy" << std::endl;
	else
		inventory_[idx]->use(target);
}