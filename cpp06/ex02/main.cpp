/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:56:49 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/28 14:29:56 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base    *base1 = generate();
    Base    &base2 = *base1;
    Base    *base3 = NULL;

    identify(base1);
    identify(base2);
    
    std::cout << std::endl;
    std::cout << "-----{Tests with pointer and reference NULL}-----" << std::endl;
    
    identify(base3);
    identify(NULL);

    delete base1;
    delete base3;
    

    return 0;
}
