/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:37:52 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/12/17 15:51:01 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template < typename T >
MutantStack<T>::MutantStack() : std::stack<T>() {}

template < typename T >
MutantStack<T>::~MutantStack(){}

template < typename T >
MutantStack<T>::MutantStack(MutantStack const &obj) : std::stack<T>(obj) {

    *this = obj;
}

template < typename T >
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &obj){

    this->c = obj.c;
    return(*this);
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return(this->std::stack<T>::c.begin());
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return(this->std::stack<T>::c.end());
}