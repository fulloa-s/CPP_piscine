/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/12 18:05:43 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	std::string path;
	std::string buffer;

	ft_check(ac, av);
	path = av[1];
	buffer = ft_open(path);
	ft_replace(buffer, av);
	ft_create(buffer, path);
}