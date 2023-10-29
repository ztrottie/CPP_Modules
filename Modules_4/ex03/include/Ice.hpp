/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:26:45 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/29 13:12:35 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/AMateria.hpp"

class Ice : public AMateria
{
public:
	// Constructors / Destructor
	Ice();
	Ice(const Ice &inst);
	~Ice();

	// Operator Overload
	Ice& operator=(const Ice &rhs);

	// Functions
	AMateria* clone() const;
	void use(ICharacter& target);
};

// Ice_HPP