/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:08:06 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/29 13:11:46 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include <iostream>

AMateria::AMateria() {
	std::cout << "Default AMateria constructor " << std::endl;
}

AMateria::AMateria(std::string const & type) : type_(type) {
	std::cout << "assignation AMateria constructor " << std::endl;
}

AMateria::AMateria(const AMateria &inst) {
	std::cout << "Copy AMateria constructor " << std::endl;
	*this = inst;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &rhs) {
	std::cout << "that doesn't make sense" << std::endl;
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria use on " << target.getName() << std::endl;
}