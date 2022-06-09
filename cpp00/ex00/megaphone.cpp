/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:52:35 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/09 18:15:13 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void)av;
	if (ac < 2)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
	return (0);
}