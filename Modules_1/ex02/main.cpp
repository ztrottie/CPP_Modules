/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:24 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:25 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::endl;

int main(void) {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	cout << "string address: " << &string << endl;
	cout << "stringPTR address: " << &stringPTR << endl;
	cout << "stringREF address: " << &stringREF << endl;

	cout << "string value: " << string << endl;
	cout << "stringPTR value: " << *stringPTR << endl;
	cout << "stringREF value: " << stringREF << endl;
}
