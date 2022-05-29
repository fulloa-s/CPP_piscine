/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:35:43 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/12/02 12:08:44 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

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
#include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
    
    public:

    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack();
    MutantStack(MutantStack const &obj);
    ~MutantStack();
    MutantStack &operator=(MutantStack const &obj);
    iterator begin();
    iterator end();
    
};

#endif