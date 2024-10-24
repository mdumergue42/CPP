/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:08:06 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/24 21:04:24 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <cstdio>
#include <fstream>
#include <string>
#include <iostream>

void	replaceInFile(char *f, char *s1, char *s2)
{
	std::ifstream		file(f);
	std::ofstream		cpyFile("final_file.replace");
	std::string			contain;
	std::size_t			pos = 0;

	if (!file || !cpyFile)
		std::cerr << "This file doesn't exist or permission denied !" << std::endl;
	while (std::getline(file, contain)) 
	{
		pos = 0;
		while ((pos = contain.find(s1)) != std::string::npos)
		{
			contain.erase(pos, std::string(s1).size());
			contain.insert(pos, std::string(s2));
			pos += contain.find(s1, pos + std::string(s2).size());
		}	
		cpyFile << contain << std::endl;
	}
	file.close();
	cpyFile.close();
}

int main (int ac, char **av)
{
	if (ac != 4)
		std::cerr << "Wrong number of arguments !" << std::endl;
	replaceInFile(av[1], av[2], av[3]);
	return 0;
}
