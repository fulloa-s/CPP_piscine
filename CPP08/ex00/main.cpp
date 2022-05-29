/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/30 17:24:48 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
  // std::cout << std::endl;
  // std::cout << "LISTE DI INTERI" << std::endl;
  // {
  //   std::cout << std::endl;
  //   std::list<int> t_list;
  //   std::list<int>::const_iterator i;
  //   std::list<int>::const_iterator e;
    
  //   for(int j = 0; j < 10; j++)
  //   t_list.push_back(j);
    
  //   i = t_list.begin();
  //   e = t_list.end();
  //   while(i != e)
  //   {
  //     std::cout << &(*i) << "    " << *i << std::endl;
  //     i++;
  //   }
  // }
  // std::cout << std::endl;
  // std::cout << "VETTORI DI INTERI" << std::endl;
  // {
  //   std::cout << std::endl;
  //   std::vector<int> t_vector;
  //   std::vector<int>::const_iterator i;
  //   std::vector<int>::const_iterator e;
    
  //   for(int j = 0; j < 10; j++)
  //   t_vector.push_back(j);
    
  //   i = t_vector.begin();
  //   e = t_vector.end();
  //   while(i != e)
  //   {
  //     std::cout << &(*i) << "    " << *i << std::endl;
  //     i++;
  //   }
  // }
  // std::cout << std::endl;
  // std::cout << "MAPPE DI INTERI" << std::endl;
  // {
  //   std::cout << std::endl;
  //   std::map<int, int> t_map;
  //   std::map<int, int>::const_iterator i;
  //   std::map<int, int>::const_iterator e;
    
  //   for(int j = 0; j < 10; j++)
  //   t_map.insert(std::pair<int, int> (j, j+1));
  //   i = t_map.begin();
  //   e = t_map.end();
  //   while(i != e)
  //   {
  //     std::cout << &(*i) << "      " << i->first << "    " << i->second << std::endl;
  //     i++;
  //   }
  // }
  

  try
  {
    std::cout << std::endl;
    std::vector<int> t_vector;
    for(int j = 0; j < 10; j++)
      t_vector.push_back(j);
    std::cout << *easyfind(t_vector, 3) << std::endl;
    std::cout << std::endl;
    std::list<int> t_list;
    for(int j = 0; j < 10; j++)
      t_list.push_back(j);
    std::cout << *easyfind(t_list, 15) << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
}