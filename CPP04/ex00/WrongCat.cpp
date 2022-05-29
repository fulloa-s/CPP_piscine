/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:18:44 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 11:26:22 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	
	this->type = "WrongCat";
	std::cout << this->type <<" has been created!" << std::endl;
}

WrongCat::~WrongCat(){

	std::cout << "WrongCat has been destroyed!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj){

	*this = obj;
	std::cout << "WrongCat copied !" << std::endl;
	
}

WrongCat& WrongCat::operator=(const WrongCat &obj){
	
	this->type = obj.type;
	// std::cout << "WrongCat used = !" << std::endl;
	return(*this);
	
}

void WrongCat::makeSound() const {

	std::cout << "Miao Miao!" << std::endl;
}