/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:14 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 13:39:05 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
class Brain
{
private:
	std::string	ideas[100];
public:
	// Constructors / Destructor
	Brain();
	Brain(const Brain &inst);
	~Brain();

	// Operator Overload
	Brain& operator=(const Brain &rhs);

	// Functions

};

// Brain_HPP