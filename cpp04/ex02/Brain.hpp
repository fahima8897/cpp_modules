/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:40:18 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/14 14:22:43 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iomanip>
#include <iostream>

class Brain
{
    private :
    
        std::string _ideas[100];
        
    public:
        
    /*  constructeurs & destructeurs    */
        Brain();
        ~Brain();

    /*  constructeur de recopie */
        Brain(const Brain &src);

    /*  operateur d'affectation */
        Brain &operator=(const Brain &rhs);

    /*  setter & getter */
        std::string getIdeas(int idea);
        void setIdea(std::string str, int idea);

};

#endif