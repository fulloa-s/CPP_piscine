/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:09:17 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 11:23:34 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	
	std::cout << "Animal has been created!" << std::endl;
}

Animal::~Animal(){

	std::cout << "Animal has been destroyed!" << std::endl;
}

Animal::Animal(const Animal &obj) {

	*this = obj;
	std::cout << "Animal copied !" << std::endl;
	
}

Animal &Animal::operator=(const Animal &obj){
	
	this->type = obj.type;
	// std::cout << "Animal used = !" << std::endl;
	return(*this);
	
}

std::string Animal::getType() const {
	
	return(this->type);
}

void Animal::makeSound() const {

	std::cout << "Animal makes a sound !" << std::endl;
}
