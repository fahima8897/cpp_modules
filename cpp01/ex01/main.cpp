/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:48:53 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/27 14:54:18 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main()
{
    Zombie *newZ;

    newZ = zombieHorde(7, "The Z");
    for(int i = 0; i < 7; i++)
        newZ[i].announce();
    delete[] newZ;
    return (0);
}