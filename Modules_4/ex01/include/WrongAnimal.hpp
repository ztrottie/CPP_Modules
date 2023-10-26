/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:05:26 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 13:27:52 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
protected:
	std::string	type_;
public:
	// Constructors / Destructor
	WrongAnimal();
	WrongAnimal(const WrongAnimal &inst);
	~WrongAnimal();

	// Operator Overload
	WrongAnimal& operator=(const WrongAnimal &rhs);

	// Functions
	void	makeSound(void) const;
};

// WrongAnimal_HPP