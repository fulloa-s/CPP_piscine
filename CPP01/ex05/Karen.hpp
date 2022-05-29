/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:38:20 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:49:37 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <string>
#include <iomanip>

class Karen
{

	void (Karen::*comments[4])();
	void debug();
	void info();
	void warning();
	void error();
	
	public:
	
	Karen();
	~Karen();
	void complain(std::string level);
	
};

#endif