/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:45:17 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 10:50:10 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap (std::string name) : ClapTrap(name) {
	
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << this->_name << " has been created!" << std::endl;
}

FragTrap::~FragTrap(){

	std::cout << "Oh no! FragTrap " << this->_name << " has been destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
	
	(*this) = obj;
	std::cout << "FragTrap " << this->_name << " has been cloned!" << std::endl;
}

FragTrap    &FragTrap::operator = (const FragTrap &obj){

	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	std::cout << "FragTrap " << this->_name << " used assignation overload!" << std::endl;
	return(*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " wants to high fives!" << std::endl;
}

void    FragTrap::attack(std::string const &target) {

	 std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}