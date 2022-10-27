/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:19:28 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/27 18:31:04 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_weapon = NULL;
	this-> _name = name;
}

HumanB::~HumanB(void){
	return ;
}

void HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

void HumanB::attack(){

	if (!_weapon)
		std::cout << this->_name << " attacks with their hands" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
	}
}