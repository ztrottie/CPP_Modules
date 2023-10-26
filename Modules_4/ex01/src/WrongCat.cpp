/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:00:07 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 13:26:37 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "Default WrongCat constructor " << std::endl;
}

WrongCat::WrongCat(const WrongCat &inst) {
	std::cout << "Copy WrongCat constructor " << std::endl;
	*this = inst;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs) {
	std::cout << "WrongCat operator = overide" << std::endl;
	if (this != &rhs) {
		type_ = rhs.type_;
	}
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "**WRONG CAT SOUND**" << std::endl;
}