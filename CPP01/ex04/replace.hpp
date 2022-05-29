/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:52:09 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/13 12:48:59 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef REPLACE_H
# define REPLACE_H

#include <iostream>
#include <new>
#include <string>
#include <iomanip>
#include <fstream>

void ft_check(int ac, char **av);
std::string ft_open(std::string path);
std::string	ft_findname(std::string path);
void	ft_create(std::string buffer, std::string path);
void	ft_replace(std::string &buffer, char **av);

#endif