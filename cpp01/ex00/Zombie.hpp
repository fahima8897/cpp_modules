/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:49:18 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/17 16:50:47 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>

class Zombie
{
private:

	std::string _name;
   
public:

	/*  constructeurs & destructeurs    */
	Zombie();
	Zombie(std:: string zombieName);
	~Zombie();

	/*  Methods */
void        announce(void);

};

#endif