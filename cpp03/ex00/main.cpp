/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:22:44 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/05 17:17:36 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap("Thor");
    ClapTrap Clap2(Clap);

    std::cout << std::endl;

    Clap.attack("Thanos");
    Clap.takeDamage(6);
    Clap.beRepaired(2);
    
    std::cout << std::endl;
    
    Clap2.attack("Iron Man");
    Clap2.takeDamage(2);
    Clap2.beRepaired(100);

    std::cout << std::endl;
    
    Clap.attack("Gojo");
    Clap.takeDamage(6);
    Clap.beRepaired(2);

    std::cout << std::endl;
    
    Clap2.attack("sukuna");
    Clap2.takeDamage(60);
    Clap2.beRepaired(50);

    std::cout << std::endl;

    return (0);
}

