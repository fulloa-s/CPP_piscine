/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Phone.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:58:35 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:48:12 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CLASS_PHONE_H
# define CLASS_PHONE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Class_Contact.hpp"

class Phone
{
	Contact		contacts[8];
	int			avaible_cont;
	int			n_contact;
	
	public:
	
	Phone();
	~Phone();
	void 		add_contact();
	void		show_contact();
	void		display_info();
	std::string contact_resize(std::string str);
	void		manage_contact();
};

#endif