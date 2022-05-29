/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:06:40 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 11:07:02 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){
	
	this->comments[0] = &Karen::debug;
	this->comments[1] = &Karen::info;
	this->comments[2] = &Karen::warning;
	this->comments[3] = &Karen::error;
	
}

Karen::~Karen() {}

void Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	std::string type[4] = {"debug", "info", "warning", "error"};
	
	for(int i = 0; i < 4; i++)
	{
		if(type[i] == level)
			return (this->*(comments[i]))();
	}
}
