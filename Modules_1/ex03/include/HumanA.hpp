/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:12:53 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:12:54 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name_;
	Weapon		*weapon_;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack(void) const
	;
};
