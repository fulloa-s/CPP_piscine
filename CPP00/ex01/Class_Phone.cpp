/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Phone.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:58:16 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/11 16:03:18 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Phone.hpp"

Phone::Phone()
{
	this->avaible_cont = 0;
	this->n_contact = 0;
}

Phone::~Phone()
{
	
}

void Phone::add_contact()
{
	std::string temp;
	
	std::cout << "PLEASE, DO NOT USE UNNECESSARY SPACES" << std::endl;
	while(temp.empty())
	{
		std::cout << "PLEASE INSERT FIRST NAME: ";
		std::getline(std::cin,temp);	
	}
	this->contacts[this->avaible_cont].add_firstname(temp);
	temp.clear();
	while(temp.empty())
	{
		std::cout << "PLEASE INSERT LAST NAME: ";
		std::getline(std::cin,temp);
	}
	this->contacts[this->avaible_cont].add_lastname(temp);
	temp.clear();
	while(temp.empty())
	{
		std::cout << "PLEASE INSERT NICKNAME: ";
		std::getline(std::cin,temp);
	}
	this->contacts[this->avaible_cont].add_nickname(temp);
	temp.clear();
	while(temp.empty())
	{
		std::cout << "PLEASE INSERT PHONE NUMBER: ";
		std::getline(std::cin,temp);
	}
	for(unsigned long i = 0; i < temp.length(); i++)
	{
		if(temp.empty() || !std::isdigit(temp[i]))
		{
			std::cout << "INVALID NUMBER, PLEASE INSERT PHONE NUMBER: ";
			temp.clear();
			std::getline(std::cin,temp);
			i = -1;
		}		
	}
	this->contacts[this->avaible_cont].add_phonenumber(temp);
	temp.clear();
	while(temp.empty())
	{
		std::cout << "PLEASE INSERT CONTACT'S DARKEST SECRET: ";
		temp.clear();
		std::getline(std::cin,temp);
	}
	this->contacts[this->avaible_cont].add_darkestsecret(temp);
	this->manage_contact();
}

void Phone::manage_contact()
{
	this->avaible_cont++;
	if(this->n_contact < 8)
		this->n_contact++;
	if(this->avaible_cont == 8)
		this->avaible_cont = 0;
}


std::string Phone::contact_resize(std::string str)
{
	if(str.length() > 10)
	{
		str.resize(9);
		str = str + '.';
	}
	return(str);
}

void Phone::display_info()
{
	std::string numb;
	int r_numb;
	
	std::cout << "INSERT CONTACT'S INDEX FOR INFO: ";
	std::getline(std::cin, numb);
	for(unsigned long i = 0; i < numb.length(); i++)
	{
		if(!std::isdigit(numb[i]))
		{
			std::cout << "INVALID INDEX, PLEASE TRY AGAIN: ";
			std::getline(std::cin,numb);
			i = -1;
		}		
	}
	r_numb = atoi(numb.c_str());
	if(r_numb > 0 && r_numb - 1 < this->n_contact)
	{
		std::cout << "FIRST NAME: " << this->contacts[r_numb - 1].get_firstname() << std::endl;
		std::cout << "LAST NAME: " << this->contacts[r_numb - 1].get_lastname() << std::endl;
		std::cout << "NICK NAME: " << this->contacts[r_numb - 1].get_nickname() << std::endl;
		std::cout << "PHONE NUMBER: " << this->contacts[r_numb - 1].get_phonenumber() << std::endl;
		std::cout << "DARKEST SECRET: " << this->contacts[r_numb - 1].get_darkestsecret() << std::endl;
	}
	else
	{
		std::cout << "INVALID INDEX" << std::endl;
		return ;
	}


	
}

void Phone::show_contact()
{
	std::string str;
	
	
	str.insert(0, 10*4+4,'_');
	std::cout << str << std::endl;
	std::cout << '|' << std::setfill (' ') << std::setw (10) << "INDEX" << '|';
	std::cout << std::setfill (' ') << std::setw (10) << "FIRST NAME" << '|';
	std::cout << std::setfill (' ') << std::setw (10) << "LAST NAME" << '|';
	std::cout << std::setfill (' ') << std::setw (10) << "NICKNAME" << '|' << std::endl;
	str.clear();
	str.insert(0, 10*4+4,'-');
	std::cout << str << std::endl;
	for(int i = 0; i < this->n_contact; i++)
	{
		std::cout << '|' << std::setfill (' ') << std::setw (10) << i + 1 << '|';
		str.clear();
		str = (this->contacts[i].get_firstname());
		str = this->contact_resize(str);
		std::cout << std::setfill (' ') << std::setw (10) << str << '|';
		str.clear();
		str = (this->contacts[i].get_lastname());
		str = this->contact_resize(str);
		std::cout << std::setfill (' ') << std::setw (10) << str << '|';
		str.clear();
		str = (this->contacts[i].get_nickname());
		str = this->contact_resize(str);
		std::cout << std::setfill (' ') << std::setw (10) << str << '|' << std::endl;
		str.clear();
		str.insert(0, 10*4+4,'-');
		std::cout << str << std::endl;	
	}
	if (this->n_contact == 0)
		return ;
	else
		this->display_info();
		
}