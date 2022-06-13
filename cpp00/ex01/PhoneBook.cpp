/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:28 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/13 16:41:40 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nbContact(0){
}

void PhoneBook::create_contact()
{
	Contact	contact_added();
	// std::string	s1;
	// std::cout << "First name : ";
	// std::cin >> s1;
	// std::cout << std::endl;
	_nbContact++;
	std::cout << "nb contact : " << _nbContact << std::endl;
}

PhoneBook::~PhoneBook(){
}

int main()
{
	// gerer ctrl + D
	PhoneBook	repertoire;
	std::string	commande;

	while (commande != "EXIT")
	{
		std::cout << "-> ";
		std::getline(std::cin, commande);
		if (commande == "ADD")
			repertoire.create_contact();
		else if (commande == "SEARCH")
			std::cout << "hello my firend i found you" << std::endl;
		// else
		// 	std::cout << "This command is not available in this phone book" << std::endl;
	}
	return (0);
}