/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/08/25 16:30:57 by fboumell         ###   ########.fr       */
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
    const WrongAnimal *i = new WrongCat();
    std::cout << j->getType() << "" << std::endl;
    std::cout << i->getType() << "" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    meta1->makeSound();

    delete meta;
    delete meta1;
    delete j;
    delete i;
    
    return 0;
}

// int	main(void)
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	const WrongAnimal* wc = new WrongCat();
// 	const WrongAnimal* wa = new WrongAnimal();
// 	const WrongCat* tc = new WrongCat();

// 	std::cout << meta->getType() << " | Should be an Animal." << std::endl;
// 	std::cout << j->getType() << " | Should be a Dog." << std::endl;
// 	std::cout << i->getType() << " | Should be a Cat." << std::endl;
// 	std::cout << wc->getType() << " | Should be a WrongCat." << std::endl;
// 	std::cout << wa->getType() << " | Should be a WrongAnimal." << std::endl;
// 	std::cout << tc->getType() << " | Should be a WrongCat." << std::endl;
// 	std::cout << "\n\nShould be a Cat sound : ";
// 	i->makeSound();
// 	std::cout << "Should be a Dog sound : ";
// 	j->makeSound();
// 	std::cout << "Should be an Animal sound : ";
// 	meta->makeSound();
// 	std::cout << "Should be a WrongCat sound : ";
// 	tc->makeSound();
// 	std::cout << "Should be a WrongAnimal sound : ";
// 	wa->makeSound();
// 	std::cout << "Should be a WrongAnimal sound although it's called on a WrongCat instance (absence of virtual keyword) : ";
// 	wc->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;
// 	delete wc;
// 	delete wa;
// 	delete tc;
// 	return (0);
// }