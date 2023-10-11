/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:59:00 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/10 12:41:46 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cerr;

std::string	replace_name(std::string name){
	std::string	output_name;

	output_name = name += ".replace";
	return (output_name);
}

int	parsing(int argc, char **argv) {
	if (argc != 4) {
		cerr << "Wrong number of arguments (infile, s1, s2) !" << endl;
		return 1;
	}
	if (!strlen(argv[1]) || !strlen(argv[2]) || !strlen(argv[3])) {
		cerr << "Need to fill those arguments you twat!" << endl;
		return 1;
	}
	return 0;
}

int	open_files(std::ifstream &input, std::ofstream &output, std::string name) {
	input.open(name);
	if (!input.is_open()) {
        cerr << "Error opening the file:" << name << endl;
        return 1;
    }
	output.open(replace_name(name));
	if (!output.is_open()) {
        cerr << "Error opening the file:" << replace_name(name) << endl;
        return 1;
    }
	return 0;
}

int main(int argc, char **argv) {
	std::ifstream	input;
	std::ofstream	output;
	std::string		line;

	if (parsing(argc, argv) > 0)
		return 1;
	if (open_files(input, output, argv[1]) > 0)
		return 1;
	while (getline(input, line)) {
		size_t pos = 0;

		pos = line.find(argv[2], pos);
		while (pos != std::string::npos) {
			line = line.substr(0, pos) + argv[3] + line.substr(pos + strlen(argv[2])); 
			pos = line.find(argv[2], 0);
		}
		output << line << endl;
	}
	input.close();
	output.close();
	return 0;
}