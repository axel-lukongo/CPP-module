/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:51:06 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/03 17:17:17 by alukongo         ###   ########.fr       */
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

/**
 * @brief Construct a new Fixed:: Fixed object
 *move to the left is like a multiplication and shift 8 time to the left
  it mean multiplies by 256
 * 
 * @param fixe 
 */
Fixed::Fixed(const int fixe){
	
	std::cout << "Int constructor called" << std::endl;
	_fixe_value = fixe << _nbr_bits;
}


//(1 << _nbr_bits) = (1 << 8) == 256
/**
 * @brief here i multiply by 256 because we want keep a fractional part
 * 
 * @param fixe 
 */
Fixed::Fixed(const float fixe){
	std::cout << "Float constructor called" << std::endl;
	// std::cout << "         "<<fixe << std::endl;
	// _fixe_value = std::roundf(fixe * (1 << _nbr_bits));
	_fixe_value = std::roundf(fixe * (1 << _nbr_bits));
	std::cout <<"------float------" <<_fixe_value << std::endl;
}


Fixed::~Fixed(void){
	std::cout << "Destructor called" <<std::endl;
	return ;
}



//(1 << _nbr_bits) = (1 << 8) == 256
/**
 * @brief here we divide because if we do a bit shifting of 8 like toInt 
 * we going going lost our fractional part because we going shift our '.'
 * 
 * @return float 
 */
float Fixed::toFloat( void ) const{
	return (float) _fixe_value / (1 << _nbr_bits);
}

/**
 * @brief 
 * move to the right is like a division and shift 8 time to the left
   it mean divide by 256
 * and here we can do a bit shifting because we don't need the fractional part
 *
 */
int Fixed::toInt( void ) const{
	// std::cout<<"--------toInt--"<< _fixe_value<<"   ";
	return _fixe_value >> _nbr_bits;
}


void Fixed::setRawBits( int const raw ){
	this->_fixe_value = raw;
}

int Fixed::getRawBits( void ) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixe_value);
}

std::ostream & operator << (std::ostream & o, Fixed const & val){
	o << val.toFloat();
	return o;
}
