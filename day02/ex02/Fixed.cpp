/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:51:06 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/03 20:46:54 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define POINT_FIXE (1 << 8)

Fixed::Fixed(void): _fixe_value(0){
	// std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed & val){
	this->_fixe_value = val.getRawBits();
}

Fixed & Fixed:: operator =(Fixed const & val){
	this->_fixe_value = val.getRawBits();
	return *this;
}

Fixed::Fixed(const int fixe){
	
	_fixe_value = fixe << _nbr_bits;
}


Fixed::Fixed(const float fixe){
	_fixe_value = std::roundf(fixe * (1 << _nbr_bits));
}


Fixed::~Fixed(void){
	return ;
}


bool Fixed::operator>(Fixed const & rhs) const{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(Fixed const & rhs) const{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	else
		return(false);
}

bool Fixed::operator>=(Fixed const & rhs) const{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	else
		return(false);
}

bool Fixed::operator<=(Fixed const & rhs) const{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	else
		return(false);
}

bool Fixed::operator==(Fixed const & rhs) const{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(Fixed const & rhs) const{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(Fixed const & rhs) const{
	return(this->toFloat() + rhs.getRawBits());
}

Fixed Fixed::operator-(Fixed const & rhs) const{
	return(this->toFloat() - rhs.getRawBits());
}
Fixed Fixed::operator*(Fixed const & rhs) const{
	return(this->toFloat() * rhs.getRawBits());
}
Fixed Fixed::operator/(Fixed const & rhs) const{
	return(this->toFloat() / rhs.getRawBits());
}

Fixed Fixed::operator++(int i){
	Fixed tmp = *this;
	this->_fixe_value++;
	return (tmp);
}

Fixed Fixed::operator++(){
	++this->_fixe_value;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	this->_fixe_value--;
	return (tmp);
}

Fixed Fixed::operator--(){
	--this->_fixe_value;
	return (*this);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2){
	if(f1._fixe_value < f2._fixe_value)
		return (f1);
	else
		return(f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2){
	if(f1._fixe_value < f2._fixe_value)
		return (f1);
	else
		return(f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2){
	if(f1._fixe_value > f2._fixe_value)
		return (f1);
	else
		return(f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2){
	if(f1._fixe_value > f2._fixe_value)
		return (f1);
	else
		return(f2);
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
	return (_fixe_value);
}

std::ostream & operator << (std::ostream & o, Fixed const & val){
	o << val.toFloat();
	return o;
}
