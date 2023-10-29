/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:25:02 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/29 13:28:47 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter
{
private:
	AMateria 			*inventory_[4];
	const std::string	name_;
	int					nbMateria_;
public:
	// Constructors / Destructor
	Character();
	Character(const std::string &name);
	Character(const Character &inst);
	~Character();

	// Operator Overload
	Character& operator=(const Character &rhs);

	// Functions
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

// Character_HPP