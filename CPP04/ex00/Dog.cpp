/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:53:35 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 11:24:12 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	
	this->type = "Dog";
	std::cout << this->type <<" has been created!" << std::endl;
}

Dog::~Dog(){

	std::cout << "Dog has been destroyed!" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj){

	*this = obj;
	std::cout << "Dog copied !" << std::endl;
	
}

Dog& Dog::operator=(const Dog &obj){
	
	this->type = obj.type;
	// std::cout << "Dog used = !" << std::endl;
	return(*this);
	
}

void Dog::makeSound() const {

	std::cout << "Bau Bau !" << std::endl;
}