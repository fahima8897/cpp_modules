/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:10:29 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/08 14:22:37 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

    /*  Constructeurs & Destruceurs */
        FragTrap();
        FragTrap(std::string str);
        ~FragTrap();
    
    /*  constructeur de recopie */
        FragTrap(const FragTrap &src);

    /*  operateur d'affecttion  */
        FragTrap &operator=(const FragTrap &rhs);

    /*  Methodes    */
        void attack(const std::string &target);
        void highFvesGuys();
};



#endif