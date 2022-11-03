/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:51:02 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/02 20:00:46 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	
	private:
		int _fixe_value;
		int const static nbr_bits;

	public:
		Fixed(int nb);
		~Fixed();
		int operator +(Fixed const & val);
		int getRawBits( void ) const;
};

#endif // !FIXED_HPP
