/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:59:58 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 13:25:25 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	// Constructors / Destructor
	WrongCat();
	WrongCat(const WrongCat &inst);
	~WrongCat();

	// Operator Overload
	WrongCat& operator=(const WrongCat &rhs);

	// Functions
	void	makeSound(void) const;
};

// WrongCat_HPP