/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:41 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
private:
	std::string	name_;

public:
	Zombie(void);
	Zombie(std::string);
	~Zombie(void);
	void	setName(std::string	name);
	void	announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );