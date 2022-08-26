/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:40:18 by fboumell          #+#    #+#             */
/*   Updated: 2022/08/26 13:21:19 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iomanip>
#include <iostream>

class Brain
{
        
    public:
        
        std::string _ideas[100];

    /*  constructeurs & destructeurs    */
        Brain();
        ~Brain();

    /*  constructeur de recopie */
        Brain(const Brain &src);

    /*  operateur d'affectation */
        Brain &operator=(const Brain &rhs);
};


#endif