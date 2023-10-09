/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:14:30 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:14:32 by ztrottie         ###   ########.fr       */
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
	void	announce(void) const;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );
