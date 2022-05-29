/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:18:44 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 11:23:50 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	
	this->type = "Cat";
	std::cout << this->type <<" has been created!" << std::endl;
}

Cat::~Cat(){

	std::cout << "Cat has been destroyed!" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj){

	*this = obj;
	std::cout << "Cat copied !" << std::endl;
	
}

Cat& Cat::operator=(const Cat &obj){
	
	this->type = obj.type;
	// std::cout << "Cat used = !" << std::endl;
	return(*this);
	
}

void Cat::makeSound() const {

	std::cout << "Miao Miao!" << std::endl;
}