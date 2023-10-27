/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:07:49 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 12:32:58 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	const std::string type;
public:
	// Constructors / Destructor
	AMateria();
	AMateria(const AMateria &inst);
	AMateria(std::string const & type);
	virtual ~AMateria();

	// Operator Overload
	AMateria& operator=(const AMateria &rhs);

	// Functions
	virtual void use(ICharacter& target);
};

// AMateria_HPP