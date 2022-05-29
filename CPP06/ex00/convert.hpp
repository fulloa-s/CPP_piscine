/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:03:50 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 10:30:38 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include <fstream>
#include <limits.h>

void ft_detectType(std::string &buffer);
void ft_toChar(std::string &buffer);
void ft_toInt(std::string &buffer);
void ft_toDouble(std::string &buffer);
void ft_toFloat(std::string &buffer);

#endif