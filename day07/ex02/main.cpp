/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:40:50 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/05 21:57:47 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"




int main(){
	Array<int> test(10);
	srand(time(NULL));
	for (size_t i = 0; i < 10; i++)
		test[i] = rand() % 100;
	std::cout << "--------------------------------------int------------------------------------"<< std::endl;
	try
	{
		for (size_t i = 0; i < 10; i++)
			std::cout << test[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "i find nothing\n";
	}
	std::cout <<std::endl <<std::endl;
	std::cout << "--------------------------------------copy------------------------------------"<< std::endl;
	Array<int> cpy(test);
	try
	{
		std::cout << cpy << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "i find nothing\n";
	}

	std::cout <<std::endl <<std::endl;
	std::cout << "--------------------------------------char------------------------------------" << std::endl;
	Array <char> test2(5);
	test2[0] = 'A';
	test2[1] = 'B';
	test2[2] = 'C';
	test2[3] = 'D';
	test2[4] = 'E';
	try
	{
		std::cout << test2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "i find nothing\n";
	}
	std::cout <<std::endl <<std::endl;
	std::cout << "--------------------------------------string------------------------------------"<< std::endl;
	Array <std::string> test3(5);
	test3[0] = "je suis";
	test3[1] = "entrain";
	test3[2] = "de";
	test3[3] = "Faire";
	test3[4] = "un teste";
	try
	{
		std::cout << test3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "i find nothing\n";
	}

	std::cout <<std::endl <<std::endl;
	std::cout << "--------------------------------------wrong test------------------------------------"<< std::endl;

	Array<int> test4(4);
	
	try
	{
		test4[0] = 1;
		test4[1] = 2;
		test4[2] = 3;
		test4[3] = 4;
		test4[4] = 5;
		std::cout << test4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "to much argument\n";
	}
}
