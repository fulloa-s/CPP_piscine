/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:52:15 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/18 13:20:49 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

DiamondTrap::DiamondTrap (std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	
	this->_d_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	std::cout << "DiamondTrap " << this->_d_name << " has been created!" << std::endl;
}

DiamondTrap::~DiamondTrap(){

	std::cout << "Oh no! DiamondTrap " << this->_d_name << " has been destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj) {
	
	(*this) = obj;
	std::cout << "DiamondTrap " << this->_d_name << " has been cloned!" << std::endl;
}

DiamondTrap    &DiamondTrap::operator = (const DiamondTrap &obj){

	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	std::cout << "DiamondTrap " << this->_d_name << " used assignation overload!" << std::endl;
	return(*this);
}

void    DiamondTrap::attack(std::string const &target) {
	
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	
	std::cout << "I am " << _d_name << " and my personal ClapTrap is " << ClapTrap::_name << std::endl;
}