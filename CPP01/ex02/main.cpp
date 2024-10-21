/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madumerg <madumerg@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:33:46 by madumerg          #+#    #+#             */
/*   Updated: 2024/10/18 21:42:32 by madumerg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string	sentence = "HI THIS IS BRAIN";
	std::string*	stringPTR = &sentence;
	std::string&	stringREF = sentence;

	std::cout << "The address of sentence  : " << &sentence << std::endl;
	std::cout << "The address of stringPTR : " << stringPTR << std::endl;
	std::cout << "The address of stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "sentence contains  -> " << sentence << std::endl;
	std::cout << "stringPTR contains -> " << *stringPTR << std::endl;
	std::cout << "stringREF contains -> " << stringREF << std::endl;
	return 0;
}
