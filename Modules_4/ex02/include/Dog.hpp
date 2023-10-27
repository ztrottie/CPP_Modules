/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:53:13 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 09:59:01 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*smallBrain;
public:
	// Constructors / Destructor
	Dog();
	Dog(const Dog &inst);
	~Dog();

	// Operator Overload
	Dog& operator=(const Dog &rhs);

	// Functions
	void	makeSound(void) const;
	const std::string  &getType(void) const;
};

// Dog_HPP
