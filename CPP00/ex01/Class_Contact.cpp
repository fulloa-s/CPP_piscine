/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:48:14 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/11 10:52:40 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Contact.hpp"

Contact::Contact()
{
  this->id = false;
}

Contact::~Contact()
{
	
}

void 	Contact::add_firstname(std::string name)
{
	this->first_name = name;
}

void 	Contact::add_lastname(std::string lname)
{
	this->last_name = lname;
}

void 	Contact::add_nickname(std::string nname)
{
	this->nickname = nname;
}

void 	Contact::add_phonenumber(std::string phone)
{
	this->phone_number = phone;
}

void 	Contact::add_darkestsecret(std::string secret)
{
	this->darkest_secret = secret;
}

std::string Contact::get_firstname()
{
	return (this->first_name);
}

std::string Contact::get_lastname()
{
	return (this->last_name);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_phonenumber()
{
	return (this->phone_number);
}

std::string Contact::get_darkestsecret()
{
	return (this->darkest_secret);
}
