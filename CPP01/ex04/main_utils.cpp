/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:04:50 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/12 18:05:38 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void ft_check(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "ERROR WITH N. ARGS" << std::endl;
		exit (1);
	}
	if (av[1][0] == '\0' || av[2][0] == '\0' || av[3][0] == '\0')
	{
		std::cout << "ERROR WITH ARGS" << std::endl;
		exit (1);
	}
}

std::string ft_open(std::string path)
{
	std::string line;
	std::string buffer;
	std::ifstream fd_i;

	fd_i.open(path);
	if(!fd_i.is_open())
	{
		std::cout << "ERROR WITH FILE" << std::endl;
		exit (1);
	}
	while(std::getline(fd_i, line))
		buffer += line + "\n";
	buffer = buffer.substr(0, buffer.size() - 1);
	fd_i.close();
	return (buffer);
}


std::string	ft_findname(std::string path)
{
	std::string _replace;
	char c = 47;
	size_t pos;
	
	pos = path.find_last_of(c);
	if((int)pos != -1)
		_replace = path.substr(pos + 1, path.length()) + ".replace";
	else
		_replace = path + ".replace";
	return (_replace);
}

void	ft_create(std::string buffer, std::string path)
{
	std::ofstream fd_o;

	fd_o.open(ft_findname(path));
	if(!fd_o.is_open())
	{
		std::cout << "ERROR WITH CREATED FILE" << std::endl;
		exit (1);
	}
	fd_o << buffer;
	fd_o.close();
}

void	ft_replace(std::string &buffer, char **av)
{
	int found;
	bool done = false;
	std::string to_find = av[2];
	std::string to_replace = av[3];
	
	if (to_find == to_replace)
	{
		std::cout << "S1 AND S2 ARE THE SAME" << std::endl;
		return ;
	}
	while((found = buffer.find(av[2])) != -1)
	{
		buffer.erase(found, to_find.length());
		buffer.insert(found, to_replace);
		done = true;
	}
	if(!done)
		std::cout << "NO WORD FOUND" << std::endl;
}
