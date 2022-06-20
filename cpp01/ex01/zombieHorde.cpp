/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:37:03 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/20 14:30:57 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie *new_zombie;

	new_zombie = new Zombie[n];
	for (int i = 0; i < n; i++)
		new_zombie[i].setName(name);
	return (new_zombie);
}