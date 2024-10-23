/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:31 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/23 12:41:43 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanA {
	public :
		HumanA(std::string, Weapon &);
		~HumanA(void);
		
	
		std::string	getNameA(void) const;
		void		setNameA(std::string);
		void		attack();
	private :
		Weapon	& ref;
		std::string	_name;
};

#endif
