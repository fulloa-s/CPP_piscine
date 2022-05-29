/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 17:25:45 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;

}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead." << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	
}