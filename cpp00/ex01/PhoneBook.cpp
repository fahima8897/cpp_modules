/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:28 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/15 17:26:21 by fboumell         ###   ########.fr       */
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
	std::cout << "~ Welcome to the PhoneBook 📞 ~" << std::endl;
	std::cout << "~ Please enter your command ~" << std::endl;
}

void PhoneBook::create_contact()
{
	
	this->_listContact[this->_nbContact] = _listContact[this->_nbContact].set_infosContact();
	this->_nbContact++;
}

std::string PhoneBook::reduce_string(std::string info)
{
	if (info.size() > 10)
		return (info.substr(0, 9) + ".");
	return (info);
}

bool	PhoneBook::manage_index(std::string index)
{
	int j;

	j = 0;
	while (index[j])
	{
		if (!isdigit(index[j]))
		{
			std::cout << "~ Format of index incorrect, try again ~" << std::endl;
			return (true);
		}
		j++;
	}
	// if (std::strtoul(index) != this->_nbContact)
	// {
	// 	std::cout << "~ The index entered does not exist, try again ~" << std::endl;
	// 	return (true);
	// }
	return (false);
		
}

void PhoneBook::phonebook_display()
{
	std::string	index;
	bool		boolean;
	
	boolean = true;
	std::cout << "---------- ---------- ----------- -----------" << std::endl;
	std::cout << "     INDEX|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "---------  ---------- ----------- -----------" << std::endl;
	for (int i = 0; i < this->_nbContact && i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << reduce_string(this->_listContact[i].get_firstName()) << "|";
		std::cout << std::setw(10) << reduce_string(this->_listContact[i].get_lastName()) << "|";
		std::cout << std::setw(10) << reduce_string(this->_listContact[i].get_nickName()) << "|";
		std::cout << std::endl;
	}
	std::cout << " " << std::endl;
	
	std::cout << "~ Which contact form do you want to consult? ~ " << std::endl;
	while(boolean)
	{
		std::cout << "~ Enter an index to see the form: ";
		std::getline(std::cin, index);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << std::endl;
			std::exit(EXIT_FAILURE);
		}
		boolean = manage_index(index);
	}
}
