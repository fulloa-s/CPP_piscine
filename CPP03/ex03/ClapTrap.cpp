/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:09:17 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 16:29:27 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap (std::string name) : _name(name) {
	
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "ClapTrap " << this->_name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap(){

	std::cout << "Oh no! ClapTrap " << this->_name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	
	(*this) = obj;
	std::cout << "ClapTrap " << this->_name << " has been cloned!" << std::endl;
}

ClapTrap    &ClapTrap::operator = (const ClapTrap &obj){

	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	std::cout << "ClapTrap " << this->_name << " used assignation overload!" << std::endl;
	return (*this);
}

void    ClapTrap::attack(std::string const &target) {

	 std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
 }

void    ClapTrap::takeDamage(unsigned int amount) {

	this->_hit_points -= amount;
	std::cout << _name << " is attacked and takes " << amount << " points of damage!" << std::endl;
	if(_hit_points <= 0)
	{
		this->_hit_points = 0;
		std::cout << _name << " is dead!" << std::endl;
	}
}

void    ClapTrap::beRepaired(unsigned int amount) {

	this->_hit_points += amount;
	std::cout << this->_name << " is repaired and recovers " << amount << " health points!" << std::endl;
}