/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/12/01 16:32:29 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    //  try
    //  {
    //     Span A(10000);
    //     A.addNumber_range(-2,2);
    //     A.addNumber(50);
    //     A.addNumber(1000000000);
    //     A.addNumber(1000);
    //     std::cout << A.longestSpan() << std::endl;
    //     std::cout << A.shortestSpan() << std::endl;
    //  }
    //  catch(const std::exception& e)
    //  {
    //      std::cerr << e.what() << '\n';
    //  } 
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}