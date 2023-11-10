/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:24:49 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/31 13:14:14 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include <iostream>
#include <malloc/_malloc.h>

using std::cout;
using std::endl;

Character::Character() :  nbMateriaDropped(0), nbMateria_(0) {
	cout << "Default Character constructor " << endl;
	for (int i = 0; i < 4; i++)
			inventory_[i] = NULL;
}

Character::Character(const std::string &name) : nbMateriaDropped(0), name_(name), nbMateria_(0) {
	cout << "Default Character constructor " << endl;
	for (int i = 0; i < 4; i++)
			inventory_[i] = NULL;
}

Character::Character(const Character &inst) {
	cout << "Copy Character constructor " << endl;
	*this = inst;
}

void	Character::free_inventory() {
	for (int i = 0; i < 4; i++) {
		if (inventory_[i]) {
			delete inventory_[i];
			inventory_[i] = NULL;
		}
	}
}

Character::~Character() {
	cout << "Default Character destructor" << endl;
	free_inventory();
	for (int i = 0; i < nbMateriaDropped; i++) {
		if (materiaDroped[i])
			delete materiaDroped[i];
	}
}

Character& Character::operator=(const Character &rhs) {
	cout << "Character operator = overload" << endl;
	if (this != &rhs) {
		name_ = rhs.name_;
		nbMateria_ = rhs.nbMateria_;
		free_inventory();
		for (int i = 0; i < 4; i++) {
			if (rhs.inventory_[i])
				inventory_[i] = rhs.inventory_[i]->clone();
		}
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->name_;
}

void Character::equip(AMateria* m) {
	if (nbMateria_ < 4) {
		nbMateria_++;
		for (int i = 0; i < 4; i++) {
			if (!inventory_[i]) {
				inventory_[i] = m;
				return;
			}
		}
	}
	else
		cout << "Inventory of " << name_ << " is full!" << endl;
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0 || !inventory_[idx])
		cout << "Wrong index buddy" << endl;
	else {
		materiaDroped[nbMateriaDropped] = inventory_[idx];
		nbMateriaDropped++;
		inventory_[idx] = NULL;
		nbMateria_--;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx > 3 || idx < 0 || !inventory_[idx])
		cout << "Wrong index buddy" << endl;
	else {
		inventory_[idx]->use(target);
	}
}