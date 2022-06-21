/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:28:18 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/21 17:37:01 by fboumell         ###   ########.fr       */
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
		std::ifstream file1;
		std::string str_replace;
		std::ofstream replace;
		
		file1.open(av[1]);
		if (file1.is_open())
		{
			// std::string line;
			// std::ifstream infile(av[1]);
			// if (infile.good() == false)
			// 	std::cout << "File can not be open" << std::endl;
			// while (true)
			// {
			// 	getline(infile, line);
			// 	std::cout << line << std::endl;
			// 	if (infile.eof())
			// 		break ;
			// }
			str_replace = av[1] + std::string(".replace");
			replace.open(str_replace.c_str(), std::ofstream::out);
			if (replace.is_open())
			{
				replace << line;

			}
			else
				std::cout << "File.replace can not be open" << std::endl;
			replace.close();
		}
		else
			std::cout << "File can not be open" << std::endl;
		file1.close();
	}
	return (0);
}