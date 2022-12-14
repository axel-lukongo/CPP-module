/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:51:06 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/02 20:00:47 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixe_value(0){
	std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed & val){
	std::cout << "Copy constructor called" <<std::endl;
	this->_fixe_value = val.getRawBits();
}

Fixed & Fixed:: operator =(Fixed const & val){
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->_fixe_value = val.getRawBits();
	return *this;
}


Fixed::~Fixed(void){
	std::cout << "Destructor called" <<std::endl;
	return ;
}


void Fixed::setRawBits( int const raw ){
	this->_fixe_value = raw;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixe_value);
}