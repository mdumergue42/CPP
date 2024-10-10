/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:31:19 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/10 23:12:21 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Principal.hpp"

std::string	CutStr(std::string tmp) {

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
		std::cout << "No information can be empty. Contact is not added." << std::endl;
		return;
	}
	for (static int i = 0; i < 8; i++) {
	
		if (directory[i].empty == false)
		{
			std::cout << "i -> " << i << std::endl;
			this->directory[i].setName(tmp[0]);
			this->directory[i].setLastName(tmp[1].substr(0,10));
			this->directory[i].setNickName(tmp[2].substr(0,10));
			this->directory[i].setNumber(tmp[3].substr(0,10));
			this->directory[i].setSecret(tmp[4].substr(0,10));
			this->directory[i].empty = true;
			return;
		}
		if (i == 7 && directory[i].empty == true)
		{
			this->directory[0].setName(tmp[0]);
			this->directory[0].setLastName(tmp[1].substr(0,10));
			this->directory[0].setNickName(tmp[2].substr(0,10));
			this->directory[0].setNumber(tmp[3].substr(0,10));
			this->directory[0].setSecret(tmp[4].substr(0,10));
			return;
		}
	}
}

#include <iomanip>

void	PhoneBook::searchContact(void) {

	int		x;

	std::cout << "Enter contact index ▷ ";
	std::cin >> x;
	std::cout << directory[x].getName() << std::endl;
	if (x >= 0 && x < 8)
	{
		std::cout << "𖣐————————————————————————————————————————————————————————𖣐" << std::endl;
	//	std::cout << "|" << std::setw(10) << CutStr(getName()) << "|" << std::setw(10) << getLastName() << "|" << std::setw(10) << getNickName() << "|" << std::setw(10) << getNumber() << "|" << std::setw(10) << getSecret() << "|" << std::endl;
		std::cout << "𖣐————————————————————————————————————————————————————————𖣐" << std::endl;
	}
	else
		std::cout << "Wrong index" << std::endl;
}
#include <cstdlib>

int	main(void)
{
	std::string	instruction;
	PhoneBook	instance;

	Contact	c;

	while (1)
	{
		std::cout << "What do you want to do ? ";
		std::getline (std::cin,instruction);
		if (std::strcmp(instruction.c_str(), "ADD") == 0)
			instance.addContact();
		else if (std::strcmp(instruction.c_str(), "SEARCH") == 0)
			instance.searchContact();
		else if (std::strcmp(instruction.c_str(), "EXIT") == 0)
			exit(1);
		else
			std::cout << "You can enter only ADD or SEARCH or EXIT." << std::endl;
	}
//	std::cout << "AFTER WHILE name in private ->" << contact.getName() << std::endl;
//	std::cout << "name in private ->" << contact.getName() << std::endl;
//	std::cout << "latsname in private ->" << contact.getLastName() << std::endl;
//	std::cout << "nickname in private ->" << contact.getNickName() << std::endl;
//	std::cout << "phone number in private ->" << contact.getNumber() << std::endl;
//	std::cout << "secret in private ->" << contact.getSecret() << std::endl;
	return 0;
}
