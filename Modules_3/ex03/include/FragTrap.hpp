/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:55:48 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/25 09:38:33 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	static const int	defHitPoint_ = 100;
	static const int	defAttackDamage_ = 30;

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
	int get_defHitPoints(void) const;
	int get_defAttackDamage(void)  const;
};

// FragTrap_HPP