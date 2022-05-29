/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/30 10:53:53 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
   int	n = 4;

    std::cout << std::endl;
	Animal *animals[n];
	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
		{
			animals[i] = new Dog();
			std::cout << std::endl;
		}
		else
		{
			animals[i] = new Cat();
			std::cout << std::endl;
		}
	}
    std::cout << "animals[0].getType() = " << animals[0]->getType() << std::endl;
	std::cout << "animals[2].getType() = " << animals[2]->getType() << std::endl;
	std::cout << "animals[1].makeSound() = "; animals[1]->makeSound();
	std::cout << "animals[3].makeSound() = "; animals[3]->makeSound();
    std::cout << std::endl;
    
	for (int i = 0; i < n; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
    std::cout << std::endl;
	Cat cat;
	std::cout << std::endl;
	Cat cat2 = cat;;
	std::cout << std::endl;
	std::cout << std::endl;
    std::cout << "cat address of 3 idea = " << std::endl; 
    cat.three_idea();
	std::cout << "cat2 address of 3 idea = " << std::endl;
    cat2.three_idea();
	std::cout << std::endl;
    
    return 0;
}