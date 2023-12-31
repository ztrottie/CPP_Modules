/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:28:38 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/16 14:01:44 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:
	int					value_;
	static int const	fractionalBits_ = 8;

public:
	Fixed(void);
	Fixed(Fixed const &inst);
	~Fixed(void);

	Fixed	&operator=(Fixed const &inst);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
};
