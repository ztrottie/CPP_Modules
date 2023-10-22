/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:55:48 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/22 12:54:56 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	// Constructors / Destructor
	FragTrap();
	FragTrap(const FragTrap &inst);
	FragTrap(const std::string &name);
	~FragTrap();

	// Operator Overload
	FragTrap& operator=(const FragTrap &rhs);

	// Functions
	void highFivesGuys(void);
};

// FragTrap_HPP