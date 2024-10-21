/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:41 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/21 14:16:21 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Weapon::Weapon( std::string weapon ) {
	std::cout << weapon << std::endl;
	return;
}

Weapon::~Weapon( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

std::string const &	Weapon::getType(void) const {
	return this->_type;
}

void	Weapon::setType(std::string Type) {
	this->_type = Type;
	return;
}
