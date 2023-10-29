/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:27:15 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/29 12:53:23 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	// Constructors / Destructor
	Cure();
	Cure(const Cure &inst);
	~Cure();

	// Operator Overload
	Cure& operator=(const Cure &rhs);

	// Functions
	AMateria* clone() const;
	void use(ICharacter& target);
};

// Cure_HPP