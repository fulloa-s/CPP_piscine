/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:53:35 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/18 11:07:22 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal(){
	
	this->type = "Dog";
	std::cout << this->type <<" has been created!" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog(){

	delete(_brain);
	std::cout << "Dog has been destroyed!" << std::endl;
}

Dog::Dog(const Dog &obj) : AAnimal(obj){

	this->_brain = new Brain();
	*this = obj;
	std::cout << "Dog copied !" << std::endl;
	
}

Dog& Dog::operator=(const Dog &obj){
	
	std::cout << "Dog used = operator !" << std::endl;
	this->type = obj.type;
	*this->_brain = *obj._brain;
	return(*this);
	
}

void Dog::makeSound() const {

	std::cout << "Bau Bau !" << std::endl;
}

void Dog::three_idea(){
	
	this->_brain->getIdeas();
}
