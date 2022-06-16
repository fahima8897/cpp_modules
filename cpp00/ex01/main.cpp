/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:22:39 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/16 15:03:25 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	repertoire;
    bool        boolean;
	std::string	commande;

    boolean = true;
	repertoire.phonebook_starter();
	while (boolean)
	{
		std::cout << "📁 ";
		std::getline(std::cin, commande);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << std::endl;
			std::exit(EXIT_FAILURE);
		}
		if (commande == "ADD" && repertoire.get_nbContact() >= 8)
			std::cout << "Sorry, the phonebooke is full. You can no longer add a contact" << std::endl;
		if (commande == "ADD")
			repertoire.create_contact();
		else if (commande == "SEARCH")
			repertoire.phonebook_display();
        else if (commande == "EXIT")
        {
            std::cout << "~ Goodbye, we hope to see you soon ~" << std::endl;
            boolean = false;
        }
		else
        {
			std::cout << "~ This command is not available ~" << std::endl;
            std::cout << "~ The only option are : ADD, SEARCH and EXIT ~" << std::endl;
            std::cout << "~ Please try again ~" << std::endl;
        }
    }
	return (0);
}