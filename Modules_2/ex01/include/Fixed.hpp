/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:28:38 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/16 16:45:24 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int 				value_;
	static int const	fractionalBits_;

public:
	Fixed(void);
	Fixed(Fixed const &inst);
	Fixed(int const &nb);
	Fixed(float const &nb);
	~Fixed(void);

	Fixed	&operator=(Fixed const &inst);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat(void) const;
	int 	toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & inst);
