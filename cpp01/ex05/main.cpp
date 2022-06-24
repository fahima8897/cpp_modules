/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:17:47 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/24 16:47:25 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    level;
    
    level.complain("DEBUG");
    level.complain("INFO");
    level.complain("HOLA");
    level.complain("WARNING");
    level.complain("ERROR");
    
    return (0);
}