/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:41:28 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/10 12:41:29 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Harl
{
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);

public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
};
