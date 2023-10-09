/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:01 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:03 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
private:
	std::string	type_;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	const std::string &getType(void) const;
	void	setType(std::string newType);
};
