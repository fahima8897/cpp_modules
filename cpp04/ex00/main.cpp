/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/13 15:57:31 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const WrongAnimal *meta1 = new WrongAnimal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *k = new WrongCat();
    const WrongCat *l = new WrongCat();
    
    std::cout <<std::endl;
    
    std::cout << meta->getType() << " >> This is an animal" << std::endl;
    std::cout << meta1->getType() << " >> This is a WrongAnimal" << std::endl;
    std::cout << j->getType() << " >> This is a Dog" << std::endl;
    std::cout << i->getType() << " >> This is a Cat" << std::endl;
    std::cout << k->getType() << " >> This is a WrongCat" << std::endl;
    std::cout << l->getType() << " >> This is a WrongCat" << std::endl;

    std::cout << std::endl;
    
    std::cout << "Animal sound (must be a generic sound):" << std::endl;
    meta->makeSound();
    std::cout << "WrongAnimal sound (must be a generic sound):" << std::endl;
    meta1->makeSound();
    std::cout << "Dog sound (must be a dog sound):" << std::endl;
    j->makeSound();
    std::cout << "Cat sound (must be a cat sound): " << std::endl;
    i->makeSound();
    std::cout << "WrongCat sound (must be a generic sound):" << std::endl;
    k->makeSound();
    std::cout << "WrongCat sound (must be a different sound from a cat):" << std::endl;
    l->makeSound();

    std::cout << std::endl;
    
    delete meta;
    delete meta1;
    delete j;
    delete i;
    delete k;
    delete l;
    
    return 0;
}
