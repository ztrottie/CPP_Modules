/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:19:39 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/31 13:12:12 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : nbMateria(0) {
	std::cout << "Default MateriaSource constructor " << std::endl;
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &inst) {
	std::cout << "Copy MateriaSource constructor " << std::endl;
	*this = inst;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (materia[i])
			delete materia[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs) {
	std::cout << "MateriaSource operator = overload" << std::endl;
	if (this != &rhs) {
		nbMateria = rhs.nbMateria;
		for (int i = 0; i < 4; i++) {
			if (materia[i])
				delete materia[i];
			materia[i] = rhs.materia[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* inst) {
	if (nbMateria < 4) {
		materia[nbMateria] = inst;
		nbMateria++;
	}
	else
		std::cout << "no space left in the MateriaSource" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (nbMateria == 0)
		return 0;
	for (int i = 0; i < 4; i++) {
		if (materia[i] && materia[i]->getType() == type)
			return materia[i]->clone();
	}
	return (0);
}