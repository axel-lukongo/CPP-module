/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:42:23 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/27 02:02:28 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

std::string Weapon::getType(void){
	return(this->type);
}

Weapon::Weapon(std::string type){
	
}

Weapon::~Weapon(void){
	
}


void Weapon::setType(std::string n){
	if(!n.empty())
		this->type = n;
	else
		std::cout<< "you dont have name" << std::endl;
}
