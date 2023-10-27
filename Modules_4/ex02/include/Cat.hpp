/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:53:15 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 09:59:18 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*smallBrain;
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