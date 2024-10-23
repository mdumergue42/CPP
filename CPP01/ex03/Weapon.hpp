/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:37:45 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/21 15:41:27 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
	public :
		void				setType(std::string Type);
		std::string const &	getType(void) const;

		Weapon(std::string);
		~Weapon(void);

	private :
		std::string	_type;
};
#endif
