/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:28:38 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 13:17:07 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int 				value_;
	static int const	fractionalBits_ = 8;

public:
	Fixed(void);
	Fixed(Fixed const &inst);
	Fixed(int const &nb);
	Fixed(float const &nb);
	~Fixed(void);

	Fixed	&operator=(Fixed const &rhs);
	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;

	Fixed	&operator++();
	Fixed	operator++(int dummy);
	Fixed	&operator--();
	Fixed	operator--(int dummy);

	bool	operator<(Fixed const &rhs) const;
	bool	operator>(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat(void) const;
	int 	toInt(void) const;

	static Fixed	&min(Fixed &inst1, Fixed &inst2);
	static const Fixed	&min(Fixed const &inst1, Fixed const &inst2);

	static Fixed	&max(Fixed &inst1, Fixed &inst2);
	static const Fixed	&max(Fixed const &inst1, Fixed const &inst2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & inst);
