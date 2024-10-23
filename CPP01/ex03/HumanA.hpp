/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:31 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/21 15:45:01 by madumerg         ###   ########.fr       */
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
		
		Weapon	& ref;
	
		std::string	getNameA(void) const;
		void		setNameA(std::string);
		void		attack();
	private :
		std::string	_name;
};

#endif
