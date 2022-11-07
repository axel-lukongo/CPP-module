/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:51:02 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/04 16:52:18 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	
	private:
		int _fixe_value;
		int const static _nbr_bits = 8;

	public:
		Fixed(void);
		Fixed(const int fixe);
		Fixed(const float fixe);
		Fixed(const Fixed & val);
		Fixed & operator =(Fixed const & val);
		~Fixed();

		// Fixed operator*(Fixed const & rhs) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream & operator << (std::ostream & o, Fixed const & val);

#endif // !FIXED_HPP
