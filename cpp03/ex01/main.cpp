/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:22:44 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/08 13:39:36 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    // ClapTrap Clap("Jacquemus");
    // ClapTrap Clap1(Clap);
    ScavTrap Scav("Apple");
    ScavTrap Scav1(Scav);
    
    std::cout << std::endl;

    // Clap.attack("Dior");
    // Clap.takeDamage(50);
    // Clap.beRepaired(100);

    // std::cout << std::endl;

    // Clap1.attack("Chanel");
    // Clap1.takeDamage(50);
    // Clap1.beRepaired(100);

    // std::cout << std::endl;

    // Clap.attack("Dior");
    // Clap.takeDamage(5);
    // Clap.beRepaired(10);

    // std::cout << std::endl;

    Scav.attack("Samsung");
    Scav.takeDamage(2);
    Scav.beRepaired(20);
    Scav.guardGate();
    
    std::cout << std::endl;

    Scav1.attack("Nokia");
    Scav1.takeDamage(3);
    Scav1.beRepaired(23);
    Scav1.guardGate();

    std::cout << std::endl;

    Scav.attack("Samsung");
    Scav.takeDamage(2);
    Scav.beRepaired(20);
    Scav.guardGate();

    std::cout << std::endl;

    return (0);
}

