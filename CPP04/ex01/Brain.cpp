/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:42:28 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 17:55:56 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	
	std::cout << "Brain has been created!" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = "bella idea";
}

Brain::~Brain(){

	std::cout << "Brain has been destroyed!" << std::endl;
}

Brain::Brain(const Brain &obj) {

	*this = obj;
	std::cout << "Brain copied !" << std::endl;
	
}

Brain& Brain::operator=(const Brain &obj){
	
	std::cout << "Brain used = !" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return(*this);
}

void Brain::getIdeas(){
	
	for(int i = 0; i < 3; i++)
		std::cout << &this->_ideas[i] << std::endl;
}
