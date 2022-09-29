/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:37:52 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/29 15:20:35 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    std::cout << "Destructor Base called" << std::endl;
}

Base *generate(void)
{
    int     randomBase;
    Base    *base;

    srand(time(NULL));
    randomBase = rand() % 3 + 1;
    switch (randomBase)
    {
        case 1:
            base = new A;
            break;
        case 2:
            base = new B;
            break;
        case 3:
            base = new C;
            break;
        default:
            base = NULL;
            break;
    }
    return (base);
}

void identify(Base *p)
{
    A *classA;
    B *classB;
    C *classC;
    
    classA = dynamic_cast<A*>(p);
    classB = dynamic_cast<B*>(p);
    classC = dynamic_cast<C*>(p);
    
    if (classA != NULL)
        std::cout << "The class type pointer generated is A" << std::endl;
    else if (classB != NULL)
        std::cout << "The class type pointer generated is B" << std::endl;
    else if (classC != NULL)
        std::cout << "The class type pointer generated is C" << std::endl;
    else 
        std::cout << "The cast has failed" << std::endl;
    
}

void identify(Base &p)
{
    try
    {
        A classA = dynamic_cast<A&>(p);
        std::cout << "The class type reference generated is A" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        B classB = dynamic_cast<B&>(p);
        std::cout << "The class type reference generated is B" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        C classC = dynamic_cast<C&>(p);
        std::cout << "The class type reference generated is C" << std::endl;
    }
    catch(const std::exception& e){}
   
}