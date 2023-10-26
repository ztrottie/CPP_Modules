/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:06:39 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 12:53:02 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
protected:
	std::string type_;

public:
	// Constructors / Destructor
	Animal();
	Animal(const Animal &inst);
	virtual ~Animal();

	// Operator Overload
	Animal& operator=(const Animal &rhs);

	// Functions
	virtual void	makeSound(void) const;
	const std::string  &getType(void) const;
};

// Animal_HPP