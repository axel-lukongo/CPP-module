/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:40:25 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/28 20:51:29 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	std::vector<int>  v1(5, 8);
	v1.push_back(12);
	v1.push_back(1);
	v1.push_back(6);
	v1.push_back(2);
	v1.push_back(5);
	try
	{
		std::vector<int>::iterator it;
		std::vector<int>::iterator ite = v1.begin() + v1.size();
		int	value = 6;

		for (it = v1.begin(); it != ite; it++)
			std::cout << *it << " ";
		std::cout << std::endl << "\033[1;32mi looking for " << value << " in my vector\033[0m" <<std::endl;
		easyfind(v1, value);
	}
	catch (const std::exception & e)
	{
		std::cout << "\033[1;31m i dont find the occurence \033[0m" << std::endl;
	}


	std::vector<char> v2;
	v2.push_back('E');
	v2.push_back('{');
	v2.push_back('B');
	v2.push_back('P');
	try
	{
		std::vector<int>::iterator it;
		
		int	value = 123;
		std::cout << std::endl << "\033[1;32mi looking for " << value << " in my vector\033[0m" <<std::endl;
		easyfind(v2, value);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31mi dont find the occurence \033[0m" << std::endl<< std::endl;
	}
	
	try
	{
		int	value = 21;
		std::vector<int>::iterator it;
		std::vector<int>::iterator ite = v1.begin() + v1.size();

		for (it = v1.begin(); it != ite; it++)
			std::cout << *it << " ";
		std::cout << std::endl << "\033[1;32mi looking for " << value << " in my vector\033[0m" <<std::endl;
		easyfind(v1, value);
		std::cout << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "\033[1;31mi dont find the occurence \033[0m" << std::endl<< std::endl;
	}
	return 0;

}
