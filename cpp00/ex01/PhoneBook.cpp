/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:28 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/14 17:28:42 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nbContact(0)
{
}

PhoneBook::~PhoneBook()
{
}

int PhoneBook::get_nbContact(void) const
{
	return (this->_nbContact);
}

void PhoneBook::phonebook_starter()
{
	std::cout << "~ Welcome to my PhoneBook 📞 ~" << std::endl;
	std::cout << "~ Please enter your command ~" << std::endl;
}


void PhoneBook::create_contact()
{
	this->_listContact[this->_nbContact].set_infosContact();
	this->_nbContact++;
	// std::cout << this->_listContact[this->_nbContact].get_firstName() << std::endl;
	// std::cout << "Nb contact : " << this->get_nbContact() << std::endl;
}

void PhoneBook::phonebook_display()
{
	std::cout << "---------- ---------- ----------- -----------" << std::endl;
	std::cout << "INDEX     |First Name|Last Name  |Nickname  " << std::endl;
	std::cout << "---------  ---------- ----------- -----------" << std::endl;
	for (int i = 0; i < this->_nbContact && i < 8; i++)
	{
		std::cout << i + 1 << "         |";
		std::cout << this->_listContact[i].get_firstName() << "         |";
		std::cout << this->_listContact[i].get_lastName() << "|";
		std::cout << std::endl;
	}
}

int main()
{
	PhoneBook	repertoire;
	std::string	commande;

	repertoire.phonebook_starter();
	while (commande != "EXIT")
	{
		std::cout << ">> ";
		std::getline(std::cin, commande);
		if (commande == "ADD" && repertoire.get_nbContact() >= 8)
			std::cout << "Sorry the phonebooke is full. You can no longer add a contact" << std::endl;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			// std::cout<< std::endl;
			std::exit(EXIT_FAILURE);
		}
		if (commande == "ADD")
			repertoire.create_contact();
		else if (commande == "SEARCH")
			repertoire.phonebook_display();
		// else
		// 	std::cout << "This command is not available. Try again" << std::endl;
	}
	return (0);
}