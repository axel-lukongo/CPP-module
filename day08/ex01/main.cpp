/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:13:18 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/07 15:33:11 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int ac, char **av) {
if (ac < 2)
{
	std::cout << "you have to gave a number as argument" << std::endl;
	return(0);
}
Span sp = Span(5);
try
{
	std::cout << "\033[1;34mthe size of vector is: 5\033[0m" <<std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.print_vec();
	std::cout << "shortest span: "<<sp.shortestSpan() << std::endl;
	std::cout << "longuest span: "<<sp.longestSpan() << std::endl<< std::endl;
}
catch(const std::exception& e)
{
	std::cout << "Error has been detect" << std::endl;
}

srand(time(NULL));
Span test1(atoi(av[1]));
std::cout << "\033[1;34mthe size of vector is: " << atoi(av[1])<<"\033[0m" <<std::endl;
try
{
	for(int i = 0; i < atoi(av[1]); i++)
		test1.addNumber(rand() % 1000);
	test1.print_vec();
	std::cout << "shortest span: "<< test1.shortestSpan() << std::endl;
	std::cout << "longuest span: "<< test1.longestSpan() << std::endl<< std::endl;
}
catch(const std::exception& e)
{
	std::cout << "Error has been detect" << std::endl;
}

try
{
	Span spa = Span(5);
	std::cout << "\033[1;34mthe size of vector is: 5\033[0m" <<std::endl;
	spa.addNumber(6);
	spa.addNumber(3);
	spa.addNumber(17);
	spa.addNumber(9);
	spa.addNumber(9);
	spa.addNumber(11);

	spa.print_vec();
	std::cout << "shortest span: "<< spa.shortestSpan() << std::endl;
	std::cout << "longuest span: "<< spa.longestSpan() << std::endl<< std::endl;
}
catch(const std::exception& e)
{
	std::cout << "\033[1;31mError: to much number\033[0m" << std::endl;
}
return 0;
}
//3 6 9 11 17