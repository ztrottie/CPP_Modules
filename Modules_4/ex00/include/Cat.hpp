/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:53:15 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 12:47:17 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/Animal.hpp"

class Cat : public Animal
{
private:

public:
	// Constructors / Destructor
	Cat();
	Cat(const Cat &inst);
	~Cat();

	// Operator Overload
	Cat& operator=(const Cat &rhs);

	// Functions
	void	makeSound(void) const;
	const std::string  &getType(void) const;
};

// Cat_HPP