/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:55:28 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/27 14:43:53 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void    Harl::_debug(void)
{
	std::cout << "--DEBUG--" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup ";
	std::cout << "burger. I really do!" << std::endl;
}

void    Harl::_info(void)
{
	std::cout << "--INFO--" << std::endl;
	std::cout << "I cannot believe adding extra bacon ";
	std::cout << "costs more money. You didn’t put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void    Harl::_warning(void)
{
	std::cout << "--WARNING--" << std::endl;
	std::cout << "I think I deserve to have some extra bacon ";
	std::cout << "for free. I’ve been coming for years whereas ";
	std::cout << "you started working here since last month.";
	std::cout << std::endl;
}

void    Harl::_error(void)
{
	std::cout << "--ERROR--" << std::endl;
	std::cout << " This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void    Harl::complain(std::string level)
{
	int         i = 0;
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4 && level != tab[i])
		i++;
	switch (i)
	{
		case 0 :
			_debug();
		case 1 :
			_info();
		case 2 :
			_warning();
		case 3 :
			_error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}