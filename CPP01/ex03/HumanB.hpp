/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:38 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/21 14:43:44 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {
	public :
		HumanB(void);
		~HumanB(void);
	
		Weapon	* ref;

		std::string	getNameB(void) const;
		void		setNameB(std::string);
		void		attack();
	private :
		std::string	_name;
};
#endif
