/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:51:02 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/01 18:53:24 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	
	private:
		int fixe_value;
		int const static nbr_bits;

	public:
		Fixed(void);
		Fixed(const Fixed & val);
		
		Fixed & operator =(Fixed const & val);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif // !FIXED_HPP
