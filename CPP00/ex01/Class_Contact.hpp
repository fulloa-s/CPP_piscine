/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Contact.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:48:11 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:48:07 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CLASS_CONTACT_H
# define CLASS_CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	bool id;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
	public:
	
	Contact();
	~Contact();
	void 		add_firstname(std::string name);
	void 		add_lastname(std::string lname);
	void 		add_nickname(std::string nname);
	void 		add_phonenumber(std::string phone);
	void 		add_darkestsecret(std::string secret);
	std::string get_firstname();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_phonenumber();
	std::string get_darkestsecret();
};

#endif