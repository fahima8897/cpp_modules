/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:48:53 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/17 17:22:16 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
    Zombie* new_one;
    
    new_one = newZombie("The Walking Dead");
    new_one->announce();
    delete  new_one;
    randomChump("White Walker");

    return (0);
}