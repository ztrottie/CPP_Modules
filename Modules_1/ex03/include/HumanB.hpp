/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:12:57 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:12:58 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name_;
	Weapon		*weapon_;

public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	~HumanB(void);

	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
};
