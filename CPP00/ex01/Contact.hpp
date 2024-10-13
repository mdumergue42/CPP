/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:12:49 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/11 21:17:39 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact {

public :

	std::string	getName(void) const;
	void		setName(std::string);
	
	std::string	getLastName(void) const;
	void		setLastName(std::string);
	
	std::string	getNickName(void) const;
	void		setNickName(std::string);

	std::string	getNumber(void) const;
	void		setNumber(std::string);

	std::string	getSecret(void) const;
	void		setSecret(std::string);

	bool	empty;
	Contact(void);
	~Contact(void);
private :	
	std::string	_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_p_number;
	std::string	_secret;
};

#endif
