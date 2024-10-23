/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:41 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/23 09:12:04 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weapon ) {
	setType(weapon);
	return;
}

Weapon::~Weapon( void ) {
	return;
}

std::string const &	Weapon::getType(void) const {
	return this->_type;
}

void	Weapon::setType(std::string Type) {
	this->_type = Type;
	std::cout << "\ttype -> " << _type << std::endl;
	return;
}
