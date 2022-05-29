/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:35:43 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/12/01 16:09:13 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef SPAN_H
#define SPAN_H

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

class Span
{
    std::vector<int> vect;
    unsigned int _N;

    public:

    Span();
    Span(unsigned int N);
    Span(Span const &obj);
    ~Span();
    Span &operator=(Span const &obj);
    void addNumber(int const &n);
    void addNumber_range(int const &min, int const &max);
    int  longestSpan();
    int  shortestSpan();
    
};
#endif