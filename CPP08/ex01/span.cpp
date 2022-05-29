/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:37:52 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/12/01 16:27:31 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::~Span(){}

Span::Span(Span const &obj) {

    *this = obj;
}

Span &Span::operator=(Span const &obj){

    this->_N = obj._N;
    this->vect = obj.vect;
    return(*this);
}

void Span::addNumber(int const &n)
{
    if(this->vect.size() < this->_N)
        this->vect.push_back(n);
    else
        throw std::runtime_error("Vector's limit reached");
}

void Span::addNumber_range(int const &min, int const &max)
{
    int _min = min;

    while(_min <= max)
        addNumber(_min++);
}

int Span::longestSpan(){

    if(this->vect.size() > 1)
    {
        int min = vect.at(0);
        int max = vect.at(0);;
        for(unsigned long i = 0; i < this->vect.size(); i++)
        {
            max = std::max(max, vect.at(i));
            min = std::min(min, vect.at(i));
        }
        return(max - min);
    }
    else
        throw std::runtime_error("there are not enough numbers in the array");
}

int Span::shortestSpan(){

    if(this->vect.size() > 1)
    {
        std::sort(this->vect.begin(), this->vect.end());
        int diff = this->vect.at(1) - this->vect.at(0);
        for(unsigned long i = 2; i < this->vect.size(); i++)
            diff = std::min(diff, this->vect.at(i) - this->vect.at(i -1));
        return (diff);
    }
    else
        throw std::runtime_error("there are not enough numbers in the array");
}