/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:04:34 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/20 17:17:48 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iomanip>
#include <iostream>

class Weapon
{
private:
	
	std::string _type;
	
public:

	/*	constructeurs & destructeur	*/
		Weapon();
		Weapon(std::string s1);
		~Weapon();
	
	/*	getter & setter	*/
		std::string getType(void) const;
		void		setType(std::string new_one);
};

#endif 