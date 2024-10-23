/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:38 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/22 13:47:35 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {
	public :
		HumanB(std::string);
		~HumanB(void);
	
		Weapon	* ptr;
	//	std::string	getWeapon(void) const;
		void		setWeapon(Weapon);

		std::string	getNameB(void) const;
		void		setNameB(std::string);
		void		attack();

	private :
		std::string	_name;
};
#endif
