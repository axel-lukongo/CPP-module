/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:05:48 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/30 16:56:32 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor has been called" << std::endl;
	_brain = new Brain();
	_brain->set_ideas();
	// _brain->ideas[0] = " je suis test ";
	_type = "Cat";
}

Cat::Cat(std::string n){
	std::cout << "Cat constructor has been called" << std::endl;
	_brain = new Brain();
	_type = "Cat"; (void)n;
}

Cat::Cat(const Cat & ins) : Animal(ins)
{
	std::cout << "Cat copy constructor has been called" << std::endl;
	_type = ins._type;
	_brain = new Brain(*ins._brain);
	*this = ins;
	// std::cout << this->getBrain() << std::endl;
}

Cat & Cat::operator=(const Cat & ins)
{
	std::cout << "Cat assign constructor has been called" << std::endl;
	if (this == &ins)
		return *this;
	_type = ins._type;
	Animal	*cpThis;
	const Animal	*cpClone;

	if (this == (&ins))
		return (*this);
	cpThis = this;
	cpClone = &ins;
	*cpThis = *cpClone;
	*this->_brain = (&ins)->getBrain();
	return *this;
}


Cat::~Cat(){
	std::cout << "Cat destructor has been called" << std::endl;
	if (_brain)
		delete _brain;
}


void Cat:: makeSound() const{
	std::cout << "miiiaouuu" << std::endl << std::endl;
}

Brain& Cat::getBrain() const{
	return *_brain;
}


const std::string & Cat::getType() const{
	// std::cout << "copy constructor has been called" <<std::endl;
	return(_type);
}
