/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:45:20 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 13:34:50 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <list>
class Span
{
private:
	std::list<int> _list;
	const unsigned int _maxSize;
	unsigned int _nbElement;
public:
	// Constructors / Destructor
	Span();
	Span(const unsigned int n);
	Span(const Span &inst);
	~Span();

	// Operator Overload
	Span& operator=(const Span &rhs);

	// Functions
	void	addNumber(const int &nbr);
	int shortestSpan() const;
	int longestSpan() const;
};

// Span_HPP