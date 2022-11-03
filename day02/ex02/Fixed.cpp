/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:51:06 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/03 17:53:41 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define POINT_FIXE (1 << 8)

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

Fixed::Fixed(const int fixe){
	std::cout << "Int constructor called" << std::endl;
	_fixe_value = fixe << _nbr_bits;
}

Fixed::Fixed(const float fixe){
	std::cout << "Float constructor called" << std::endl;
	_fixe_value = std::roundf(fixe * (1 << _nbr_bits));
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" <<std::endl;
	return ;
}

float Fixed::toFloat( void ) const{
	return (float) _fixe_value / (1 << _nbr_bits);
}

int Fixed::toInt( void ) const{
	return _fixe_value >> _nbr_bits;
}


void Fixed::setRawBits( int const raw ){
	this->_fixe_value = raw;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixe_value);
}

std::ostream & operator << (std::ostream & o, Fixed const & val){
	o << val.toFloat();
	return o;
}
