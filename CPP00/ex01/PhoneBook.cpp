/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:31:19 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/23 09:14:21 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}
std::string	PhoneBook::CutStr(std::string tmp) {

	if (tmp.size() > 10)
		tmp.replace(9, 1, ".");
	return tmp;
}

void	PhoneBook::addContact(void) {
	std::string	tmp[5];
		std::cout << "First Name ➯ ";
		std::getline (std::cin,tmp[0]);
		std::cout << "Last Name ➯ ";
		std::getline(std::cin,tmp[1]);
		std::cout << "Nickname ➯ ";
		std::getline(std::cin,tmp[2]);
		std::cout << "Phone Number ➯ ";
		std::getline(std::cin,tmp[3]);
		std::cout << "Darkest Secret ➯ ";
		std::getline(std::cin,tmp[4]);
	if (tmp[0].size() == 0 || tmp[1].size() == 0 || tmp[2].size() == 0 || \
			tmp[3].size() == 0 || tmp[4].size() == 0)
	{
		std::cerr << "No information can be empty. Contact is not added." << std::endl;
		return;
	}
	for (int i = 0; i < 8; i++) {

		if (directory[i].empty == false)
		{
			this->directory[i].setName(tmp[0]);
			this->directory[i].setLastName(tmp[1]);
			this->directory[i].setNickName(tmp[2]);
			this->directory[i].setNumber(tmp[3]);
			this->directory[i].setSecret(tmp[4]);
			this->directory[i].empty = true;
			return;
		}
		if (i == 7 && directory[i].empty == true)
		{
			static int r = 0;
			if (r == 7)
				r = 0;
			this->directory[r].setName(tmp[0]);
			this->directory[r].setLastName(tmp[1]);
			this->directory[r].setNickName(tmp[2]);
			this->directory[r].setNumber(tmp[3]);
			this->directory[r].setSecret(tmp[4]);
			r++;
			return;
		}
	}
}

void	PhoneBook::printTabSearch(void) {
	for (int i = 0; i < 8 && directory[i].empty == true; i++) {
		std::cout << "𖣐———————————————————————————————————————————𖣐" << std::endl;
		std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << this->CutStr(directory[i].getName()).substr(0,10) << "|" << std::setw(10) << this->CutStr(directory[i].getLastName()).substr(0,10) << "|" << std::setw(10) << this->CutStr(directory[i].getNickName()).substr(0,10) << "|" << std::endl;
		std::cout << "𖣐———————————————————————————————————————————𖣐" << std::endl;
	}
	return;
}

void	PhoneBook::printContactFound(int i) {

	if (directory[i].empty == true)
	{
		std::cout << "First Name : " << directory[i].getName() << std::endl;
		std::cout << "Last Name : " << directory[i].getLastName() << std::endl;
		std::cout << "Nickname : " << directory[i].getNickName() << std::endl;
		std::cout << "Phone number : " << directory[i].getNumber() << std::endl;
		std::cout << "Darkest Secret : " << directory[i].getSecret() << std::endl;
		return;
	}
	std::cout << "Doesn't exist" << std::endl;
}

void	PhoneBook::searchContact(void) {

	std::string	index;
	int			i = -1;

	printTabSearch();
	std::cout << "Enter contact index ▷ ";
	std::getline(std::cin, index);
	if (index.size() == 0 || index.size() > 1 || !(std::isdigit(index[0])))
	{
		std::cerr << "Wrong index" << std::endl;
		return;
	}
	i = std::atoi(index.c_str());
	if (i >= 0 && i <= 8)
		printContactFound(i);
	else
	{
		std::cerr << "Wrong index" << std::endl;
		return;
	}
	return;
}

int	main(int ac, char **av)
{
	if (ac != 1)
		return 1;
	(void) av;
	std::string	instruction;
	PhoneBook	instance;

	while (instruction != "EXIT")
	{
		std::cout << "What do you want to do ? ";
		std::getline (std::cin,instruction);
		if (std::cin.eof())
			return 1;
		if (instruction == "ADD")
			instance.addContact();
		else if (instruction == "SEARCH")
			instance.searchContact();
	}
	return 0;
}
