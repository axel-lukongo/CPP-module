/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:09:24 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/10 16:56:52 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap constructor default has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap constructor has been called" << std::endl << std::endl;
	_Hit_point = 100;
	_Energy = 50;
	_Attack = 20;

}

ScavTrap & ScavTrap::operator = (const ScavTrap & ins ){
	std::cout << "copy assignat has been called" << std::endl;
	_Name = ins._Name;
	_Hit_point = ins._Hit_point;
	_Energy = ins._Energy;
	_Attack = ins._Attack;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap & ins ){
	_Name = ins._Name;
	_Hit_point = ins._Hit_point;
	_Energy = ins._Energy;
	_Attack = ins._Attack;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor has been called" << std::endl;
}




void ScavTrap::attack(const std::string& target){
	if (_Energy > 0 && _Hit_point > 0)
	{
		std::cout << "Attack from " << _Name << " attack " << target << " causing " << _Attack << " dammage !";
		std::cout<< "to "<< target << std::endl;
		std::cout << _Name  << " HP: " << _Hit_point << std::endl;
		_Energy -= 1;
		std::cout << _Name  << " Energy: " << _Energy << std::endl << std::endl;
	}
	else if ( _Energy <= 0)
		std::cout << "not anought energy" << std::endl<< std::endl;
	else
		std::cout << _Name <<" is dead" << std::endl<< std::endl;
}


void ScavTrap::guardGate(){
	if (_Hit_point > 0 && _Energy > 0)
		std::cout << _Name << "ScavTrap enter in guardGate mode" << std::endl << std::endl;
	else
		std::cout << _Name << " canot enter in guardGate mode because he is dead or don't have Energy" << std::endl << std::endl;
}
