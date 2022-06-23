/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:28:18 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/23 16:06:24 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "The number of parameters is wrong." << std::endl;
		std::cout << "Three parameters are needed : <filename> <s1> <s2>" << std::endl;
	}
	else
	{
		std::ifstream	file1;
		std::string		str_replace;
		std::ofstream	replace;
		std::string		line;
		
		file1.open(av[1]);
		if (file1.is_open())
		{
			std::getline(file1, line);
			if (file1.eof())
			{
				file1.close();
				std::cout << "The file " << av[1] << " is empty" << std::endl;
			}
			str_replace = av[1] + std::string(".replace");
			replace.open(str_replace.c_str(), std::ofstream::out);
			if (replace.is_open())
			{
				while (!file1.eof())
				{
					replace << line << "\n";
					std::getline(file1, line);
				}
			}
			else
				std::cout << str_replace << " can not be open" << std::endl;
			replace.close();
		}
		else
			std::cout << av[1] << " can not be open" << std::endl;
		file1.close();
	}
	return (0);
}