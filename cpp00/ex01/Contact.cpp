/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:22 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/15 16:14:00 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

Contact::Contact(std::string s1, std::string s2, std::string s3,
	std::string s4, std::string s5) : _firstName(s1), _lastName(s2), _nickname(s3),
    _phoneNumber(s4), _secret(s5){
}

std::string Contact::get_firstName(void) const
{
    return (this->_firstName);
}

std::string Contact::get_lastName(void) const
{
    return (this->_lastName);
}

std::string Contact::get_nickName(void) const
{
    return (this->_nickname);
}

std::string Contact::get_phoneNumber(void) const
{
    return (this->_phoneNumber);
}

std::string Contact::get_secret(void) const
{
    return (this->_secret);
}

std::string Contact::add_infosContact(std::string line)
{
    std::string info;
    
    std::cout << line;
    std::getline(std::cin, info);
    if (info.size() == 0)
    {
        while (info.size() == 0)
        {
            std::cout << "~ An information must be entered ~" << std::endl;
            std::cout << line;
            std::getline(std::cin, info);
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore();
                std::cout << std::endl;
                std::exit(EXIT_FAILURE);
            }
        }
    }
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << std::endl;
        std::exit(EXIT_FAILURE);
    }
    return (info);
}
Contact Contact::set_infosContact()
{
    Contact add_contact(add_infosContact("↪️ Enter first Name : "),
                        add_infosContact("↪️ Enter last Name : "),
                        add_infosContact("↪️ Enter nickname : "),
                        add_infosContact("↪️ Enter phone Number : "),
                        add_infosContact("↪️ Enter darkest secret : "));
    return (add_contact);
}

