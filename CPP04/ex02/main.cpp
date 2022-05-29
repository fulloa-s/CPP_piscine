/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/30 10:56:38 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // AAnimal error;
    std::cout << std::endl;
    Cat cat;
    std::cout << std::endl;
    Cat cat2;
    std::cout << std::endl;
    cat2 = cat;
    std::cout << std::endl;
    cat2.three_idea();
    std::cout << "cat2.getType() = " << cat2.getType() << std::endl;
    std::cout << "cat2.makeSound() = "; cat2.makeSound();
    std::cout << std::endl;
}