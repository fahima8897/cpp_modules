/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:52:35 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/22 10:31:03 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;
	char	c;
	
	if (ac == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
	else
	{
		while (av[i])
		{
			j = 0;
			if ((i < ac - 1 && av[i][0] == ' '))
				j++;
			while(av[i][j])
			{
				c = toupper(av[i][j]);
				std:: cout << c;
				j++;
			}
			if (i < ac - 1 && av[i][j - 1] == ' ')
				std::cout << "";
			else
				std::cout << " ";
			i++;
		}
	std:: cout << std:: endl;
	}
	return (0);
}
