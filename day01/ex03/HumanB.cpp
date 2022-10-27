/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:19:28 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/27 02:03:59 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string arme){
	this->_weapon = NULL;
}

HumanB::~HumanB(void){
	return ;
}

void HumanB::setWeapon(Weapon arme){
	this->_weapon = &arme;
}

void HumanB::attack(){
	if (!_weapon)
		std::cout << this->_name << " attacks with their hands" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}