/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:16:52 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/21 14:05:35 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon	&_arme;
	
public:

	/* constructeurs & destructeur	*/
		HumanA(std::string s1, Weapon &arme);
		~HumanA();
	
	/*	Methodes	*/
		void	attack();
};

#endif