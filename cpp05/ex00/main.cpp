/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:47:13 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/20 13:53:28 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "---- Constructors ----" << std::endl;
    
    Bureaucrat  Luffy("Luffy", 3);
    Bureaucrat  Chopper(Luffy);
    
    std::cout << std::endl;
    
    std::cout << Luffy << std::endl;
    std::cout << Chopper << std::endl;

    std::cout << "---- Destructors ----" << std::endl;
    
    return 0;
}