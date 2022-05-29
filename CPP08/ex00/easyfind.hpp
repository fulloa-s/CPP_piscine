/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:35:43 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/30 17:22:21 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include <fstream>
#include <limits.h>
#include <map>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

template < typename T >
typename T::iterator easyfind(T &container, int const &n)
{
    typename T::iterator r ;
    if((r = std::find(container.begin(), container.end(), n)) != container.end())
        return (r);
    else
        throw std::runtime_error("Value not found");
}


#endif