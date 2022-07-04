/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:22:44 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/04 15:19:04 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap("Thor");
    ClapTrap target(Clap);

    Clap.attack("Thanos");
    Clap.takeDamage(6);
    Clap.beRepaired(2);
    target.attack("Thanos");
    target.takeDamage(62);
    target.beRepaired(10);
    Clap.attack("Gojo");
    Clap.takeDamage(6);
    Clap.beRepaired(2);
    target.attack("sukuna");
    target.takeDamage(62);
    target.beRepaired(10);

    return (0);
}

