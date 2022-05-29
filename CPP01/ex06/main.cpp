/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:44:40 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;
	std::string filter[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string cmd;
	int i = -1;
	
	if (ac != 2)
		exit (1);
	cmd = av[1];
	while(++i < 4)
	{
		if(filter[i] == cmd)
			break;
	}
	switch(i)
	{
		case 0 :
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("debug");
			std::cout << std::endl;
		case 1 :
			std::cout <<  "[ INFO ]"  << std::endl;
			karen.complain("info");
			std::cout << std::endl;
		case 2	:
			std::cout <<  "[ WARNING ]"  << std::endl;
			karen.complain("warning");
			std::cout << std::endl;
		case 3	:
			std::cout <<  "[ ERROR ]"  << std::endl;
			karen.complain("error");
			std::cout << std::endl;
			break ;
		default	:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
	}
}