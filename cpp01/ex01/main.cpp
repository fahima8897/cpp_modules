/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:48:53 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/20 14:27:18 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main()
{
    Zombie *newZ;

    newZ = zombieHorde(6, "The Z");
    for(int i = 0; i < 6; i++)
        newZ[i].announce();
    delete[] newZ;
    return (0);
}