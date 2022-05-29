/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/30 10:50:39 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "------------------------------------------" << std::endl;
    const WrongAnimal* Wrongmeta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat();

    std::cout << wrong_i->getType() << " " << std::endl;
    wrong_i->makeSound();
    Wrongmeta->makeSound();

    
    // delete(meta);
    // delete(j);
    // delete(i);
    // delete(Wrongmeta);
    // delete(wrong_i);
    
    return 0;
}