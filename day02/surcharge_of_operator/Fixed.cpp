/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:51:06 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/02 20:00:46 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int nb): _fixe_value(nb){
	// std::cout << "Default constructor called" <<std::endl;
}

int Fixed:: operator +(Fixed const & val){
	std::cout<<"Surcharge operand '+' "<<std::endl;
	this->_fixe_value = this->_fixe_value + val.getRawBits();
	return _fixe_value;
}


Fixed::~Fixed(void){
	// std::cout << "Destructor called" <<std::endl;
	return ;
}

int Fixed::getRawBits( void ) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixe_value);
}