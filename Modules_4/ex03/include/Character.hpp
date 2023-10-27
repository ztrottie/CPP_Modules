/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:25:02 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 12:25:38 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character
{
private:

public:
	// Constructors / Destructor
	Character();
	Character(const Character &inst);
	~Character();

	// Operator Overload
	Character& operator=(const Character &rhs);

	// Functions

};

// Character_HPP