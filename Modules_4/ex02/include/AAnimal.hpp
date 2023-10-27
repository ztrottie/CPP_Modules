/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:06:39 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 09:55:55 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal
{
protected:
	std::string type_;

public:
	// Constructors / Destructor
	AAnimal();
	AAnimal(const AAnimal &inst);
	virtual ~AAnimal();

	// Operator Overload
	AAnimal& operator=(const AAnimal &rhs);

	// Functions
	virtual void	makeSound(void) const = 0;
	const std::string  &getType(void) const;
};

// Animal_HPP