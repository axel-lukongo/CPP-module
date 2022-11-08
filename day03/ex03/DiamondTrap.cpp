/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:54 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/08 19:04:18 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), FragTrap(), ScavTrap(){
	_name = "";
	_Hit_point = FragTrap::_Hit_point;
	_Energy = ScavTrap::_Energy;
	_Attack = FragTrap::_Attack;
	std::cout << "DiamondTrap default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name):_name(name), ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(){
	_Hit_point = FragTrap::_Hit_point;
	_Energy = ScavTrap::_Energy;
	_Attack = FragTrap::_Attack;
	std::cout << "DiamondTrap constructor has been called" << std::endl;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << "i'm " << this->_name << " and my ClapTrap is " << ClapTrap::_Name << std::endl << std::endl;
}
