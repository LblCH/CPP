/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 06:59:51 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 06:59:51 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string str;

	if (argc != 4)
	{
		std::cout << "Incorrect number of arguments." << std::endl;
		exit(1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error empty argument(s)." << std::endl;
		exit(1);
	}
	std::ifstream readFile(filename);
	if (readFile.fail())
	{
		std::cout << "Error opening file." << std::endl;
		exit(1);
	}
	std::ofstream outFile(filename + ".replace");
	if (outFile.fail())
	{
		std::cout << "Error creating output file." << std::endl;
		exit(1);
	}
	while (std::getline(readFile, str))
	{
		while (str.find(s1) != std::string::npos)
			str.replace(str.find(s1), s1.size(), s2);
		outFile << str << std::endl;
	}
	if (str == "")
		outFile << std::endl;
	readFile.close();
	outFile.close();
	return(0);
}