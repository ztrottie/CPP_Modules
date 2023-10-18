/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:28:32 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 12:46:11 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Fixed.hpp"

int	main(void) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( -1 ) );

	std::cout << b << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}

// #include <iostream>
// #include <limits.h>
// #include "../include/Fixed.hpp"

// #define RED   "\x1B[31m"
// #define GRN   "\x1B[32m"
// #define YEL   "\x1B[33m"
// #define BLU   "\x1B[34m"
// #define MAG   "\x1B[35m"
// #define CYN   "\x1B[36m"
// #define WHT   "\x1B[37m"
// #define PNK   "\x1B[38;5;206m"
// #define RESET "\x1B[0m"

// static void print_comparison_result(bool result, std::string _operator, const Fixed& negative_nbr, const Fixed& positive_nbr){
// 	std::string result_bool = result ? "\x1B[32mtrue" : "\x1B[31mfalse";

// 	std::cout << negative_nbr << YEL << _operator << RESET << positive_nbr << " = " << result_bool << RESET << std::endl;
// }

// static void print_arithmetic_result(Fixed result, std::string _operator, const Fixed& negative_nbr, const Fixed& positive_nbr){

// 	std::cout << negative_nbr << BLU << _operator << RESET << positive_nbr << " = " << result << std::endl;
// }

// int	main(void)
// {
// 	Fixed negative_nbr(-5);
// 	Fixed positive_nbr(7);
// 	Fixed float_nbr(2.5f);
// 	Fixed increment_tester(-1);

// 	// > < >= <= == !=
// 	std::cout << YEL << "Comparison Operators" << RESET << std::endl;
// 	print_comparison_result((negative_nbr > positive_nbr), " > ", negative_nbr, positive_nbr);
// 	print_comparison_result((negative_nbr < positive_nbr), " < ", negative_nbr, positive_nbr);
// 	print_comparison_result((negative_nbr >= positive_nbr), " >= ", negative_nbr, positive_nbr);
// 	print_comparison_result((negative_nbr <= positive_nbr), " <= ", negative_nbr, positive_nbr);
// 	print_comparison_result((negative_nbr == positive_nbr), " == ", negative_nbr, positive_nbr);
// 	print_comparison_result((negative_nbr != positive_nbr), " != ", negative_nbr, positive_nbr);
// 	// + - * /
// 	std::cout << std::endl << BLU "Arithmetic operators" << RESET << std::endl;
// 	print_arithmetic_result((negative_nbr + positive_nbr), " + ", negative_nbr, positive_nbr);
// 	print_arithmetic_result((negative_nbr - positive_nbr), " - ", negative_nbr, positive_nbr);
// 	print_arithmetic_result((negative_nbr * positive_nbr), " * ", negative_nbr, positive_nbr);
// 	print_arithmetic_result((negative_nbr / positive_nbr), " / ", negative_nbr, positive_nbr);
// 	//++ -- ++ --
// 	std::cout << std::endl << PNK << "Increment/Decrement operators" << RESET << std::endl;
// 	std::cout << "Increment\x1B[38;5;206m++\x1B[0m " << increment_tester++ << " After " << increment_tester << std::endl;
// 	std::cout << "Increment\x1B[38;5;206m--\x1B[0m " << increment_tester-- << " After " << increment_tester << std::endl;
// 	std::cout << "\x1B[38;5;206m++\x1B[0mIncrement " << ++increment_tester << " After " << increment_tester << std::endl;
// 	std::cout << "\x1B[38;5;206m--\x1B[0mIncrement " << --increment_tester << " After " << increment_tester << std::endl;
// 	// toFloat toInt min max
// 	std::cout << std::endl << CYN << "Member functions" << RESET << std::endl;
// 	std::cout << "Value before " << --positive_nbr << CYN << " toFloat " << RESET << positive_nbr.toFloat() << std::endl;
// 	std::cout << "Value before " << float_nbr << CYN << " toInt " << RESET << float_nbr.toInt() << std::endl;
// 	std::cout << "Both values before call to \x1B[36mmin\x1B[0m (" << positive_nbr << " | " << negative_nbr << ") Min result " << Fixed::min(positive_nbr, negative_nbr) << std::endl;
// 	std::cout << "Both values before call to \x1B[36mmax\x1B[0m (" << positive_nbr << " | " << negative_nbr << ") Max result " << Fixed::max(positive_nbr, negative_nbr) << std::endl;
// }