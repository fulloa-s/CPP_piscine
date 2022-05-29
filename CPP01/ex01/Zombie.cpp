/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/11 19:08:49 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead." << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	
}

void Zombie::add_name(std::string name)
{
	this->name = name;
}
