/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:28:18 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/24 14:32:16 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

std::string	check_emptyFile(std::ifstream &file, char *str)
{
	std::string line;

	std::getline(file, line);
	if (file.eof())
	{
		file.close();
		std::cout << "The file " << str << " is empty" << std::endl;
	}
	return (line);
}

void	check_emptyString(std::string const s1, std::string const s2)
{
	if (s1.length() == 0 || s2.length() == 0)
		std::cout << "One of the string is empty. Try again" << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "The number of parameters is wrong." << std::endl;
		std::cout << "Three parameters are needed : <filename> <s1> <s2>" << std::endl;
	}
	else
	{
		std::ifstream		file1;
		std::string			str_replace;
		std::ofstream		replace;
		std::string			line;
		size_t 				pos;
		std::string	const	str2 = av[2];
		std::string const 	str3 = av[3];
		
		file1.open(av[1]);
		if (file1.is_open())
		{
			check_emptyString(str2, str3);
			line = check_emptyFile(file1, av[1]);
			str_replace = av[1] + std::string(".replace");
			replace.open(str_replace.c_str(), std::ofstream::out);
			if (replace.is_open())
			{
				while (!file1.eof())
				{
					pos = line.find(av[2]);
					if (pos != std::string::npos)
					{
						line.erase(pos, str2.length());
						line.insert(pos, av[3]);
						replace << line << "\n";
					}
					else
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