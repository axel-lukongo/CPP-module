/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:09:58 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/17 19:09:59 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor has been called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string n){
	std::cout << "WrongAnimal constructor has been called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal & ins)
{
	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
	*this = ins;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & ins)
{
	std::cout << "WrongAnimal assign constructor has been called" << std::endl;
	if (this == &ins)
		return *this;
	_type = ins._type;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor has been called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal have no song"<< std::endl << std::endl;
}

std::string WrongAnimal::getType(){
	return(_type);
}

const std::string & WrongAnimal::getType() const{
	return(_type);
}