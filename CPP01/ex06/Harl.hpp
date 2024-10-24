/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:57:58 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/24 21:58:02 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl {
	public :
		void	complain(std::string);

		Harl(void);
		~Harl(void);
	
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
#endif
