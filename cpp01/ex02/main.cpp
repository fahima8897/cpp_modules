/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:43:44 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/20 15:01:43 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string stringREF = variable;
    
    std:: cout << "The memory address of the string variable is : " << &variable << std::endl; 
    std:: cout << "The memory address held by stringPTR is : " << stringPTR << std::endl;
    std:: cout << "The memory address held by stringREF is : " << &stringREF << std::endl;

    std::cout << "The value of the string variable is : " << variable << std::endl;
    std::cout << "The value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is : " << stringREF << std::endl;

    return (0);
}