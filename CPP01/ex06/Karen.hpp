/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:38:20 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:49:11 by fulloa-s         ###   ########.fr       */
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


// https://www.decodejava.com/cpp-pointer-to-member-functions.htm
// https://www.dreamincode.net/forums/topic/223327-jump-tables-in-classes/
// https://github.com/public-jun/old-cpp01/tree/main/ex05

//A Pointer to member function
//void (Classname :: *ptr) (ARGS) = &Classname :: function_name;

//Creating an object of class A
// Class ob;
//Using a pointer-to-member-function to call the member function put_value()
// (ob.*pt1)(ARGS);

//Pointer to object
// Class *ptr_ob = &ob;
//Using pointer to object to access member function, pointed by a pointer
// (ptr_ob->*ptr)(40,40);

#endif