/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nokia3310.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:30:36 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/11 16:06:40 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nokia3310.hpp"

int main()
{
	Phone nokia;
	std::string input;
	
	while(1)
	{
		input.clear();
		std::cout << "Nokia_3310: ";
		if(!std::getline(std::cin,input))
			break ;
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			nokia.add_contact();
		else if (input == "SEARCH")
			nokia.show_contact();		
	}
	
}