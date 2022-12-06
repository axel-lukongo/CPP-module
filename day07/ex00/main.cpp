/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:39:26 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/06 12:36:06 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.hpp"

int main()
{
	{
		std::cout << "-------------------int------------------" <<std::endl;
		int	a = 2;
		int	b = 3;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		std::cout << "------swap-----" << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << std::endl;
		std::cout << "-------------------string------------------" <<std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "------swap-----" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "-------------------char------------------" <<std::endl;
		char c = '{';
		char d = 'A';
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "------swap-----" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "-------------------bool------------------" <<std::endl;
		bool c = false;
		bool d = true;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "------swap-----" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "-------------------float------------------" <<std::endl;
		float c = 124.43f;
		float d = 0.000456f;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "------swap-----" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
}
