/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:38:05 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/28 12:53:32 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iomanip>
#include <iostream>
#include <time.h>
#include <cstdlib>

class Base
{
public:

    virtual ~Base();
};

class A : public Base{};   
class B : public Base{};
class C : public Base{};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif