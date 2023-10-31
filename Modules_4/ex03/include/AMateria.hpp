/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:07:49 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/31 12:33:42 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type_;
public:
	// Constructors / Destructor
	AMateria();
	AMateria(const AMateria &inst);
	AMateria(std::string const & type);
	virtual ~AMateria();

	// Operator Overload
	AMateria& operator=(const AMateria &rhs);

	// Functions
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	const std::string	&getType() const;
};

// AMateria_HPP