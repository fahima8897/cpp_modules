/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:56:28 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/10 16:53:50 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "constructeur" << std:: endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "destructeur" << std:: endl;
	return ;
}

int main()
{
	PhoneBook repertoire;
	return (0);
}