/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:04:30 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/10 22:05:41 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void) {
	empty = false;
	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

std::string	Contact::getName(void) const {
	return this->_name;
}

void	Contact::setName(std::string Name) {
	this->_name = Name;
	return;
}


std::string	Contact::getLastName(void) const {
	return this->_last_name;
}

void	Contact::setLastName(std::string LastName) {
	this->_last_name = LastName;
	return;
}


std::string	Contact::getNickName(void) const {
	return this->_nickname;
}

void	Contact::setNickName(std::string NickName) {
	this->_nickname = NickName;
	return;
}


std::string	Contact::getNumber(void) const {
	return this->_p_number;
}

void	Contact::setNumber(std::string Number) {
	this->_p_number = Number;
	return;
}


std::string	Contact::getSecret(void) const {
	return this->_secret;
}

void	Contact::setSecret(std::string Secrets) {
	this->_secret = Secrets;
	return;
}
