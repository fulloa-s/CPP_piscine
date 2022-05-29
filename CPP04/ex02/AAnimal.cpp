/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:09:17 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/18 11:30:09 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
	
	std::cout << "AAnimal has been created!" << std::endl;
}

AAnimal::~AAnimal(){

	std::cout << "AAnimal has been destroyed!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj) {

	*this = obj;
	std::cout << "AAnimal copied !" << std::endl;
	
}

AAnimal &AAnimal::operator=(const AAnimal &obj){
	
	this->type = obj.type;
	// std::cout << "AAnimal used =" << std::endl;
	return(*this);
	
}

std::string AAnimal::getType() const {
	
	return(this->type);
}
