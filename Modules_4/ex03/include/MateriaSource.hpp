/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:32:47 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/31 12:25:06 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *materia[4];
	int	nbMateria;
public:
	// Constructors / Destructor
	MateriaSource();
	MateriaSource(const MateriaSource &inst);
	~MateriaSource();

	// Operator Overload
	MateriaSource& operator=(const MateriaSource &rhs);

	// Functions
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

// MateriaSource_HPP