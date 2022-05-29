/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:09:17 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 11:24:38 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	
	std::cout << "WrongAnimal has been created!" << std::endl;
}

WrongAnimal::~WrongAnimal(){

	std::cout << "WrongAnimal has been destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {

	*this = obj;
	std::cout << "WrongAnimal copied !" << std::endl;
	
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj){
	
	this->type = obj.type;
	// std::cout << "WrongAnimal used = !" << std::endl;
	return(*this);
	
}

std::string WrongAnimal::getType() const {
	
	return(this->type);
}

void WrongAnimal::makeSound() const {

	std::cout << "WrongAnimal makes a sound !" << std::endl;
}
