/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:18:44 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 17:58:59 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	
	this->type = "Cat";
	std::cout << this->type <<" has been created!" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat(){

	delete(_brain);
	std::cout << "Cat has been destroyed!" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj){

	this->_brain = new Brain();
	*this = obj;
	std::cout << "Cat copied !" << std::endl;
	
}

Cat& Cat::operator=(const Cat &obj){
	
	std::cout << "Cat used = !" << std::endl;
	this->type = obj.type;
	*this->_brain = *obj._brain;
	return(*this);
	
}

void Cat::makeSound() const {

	std::cout << "Miao Miao!" << std::endl;
}

void Cat::three_idea(){
	
	this->_brain->getIdeas();
}
