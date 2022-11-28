/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:40:50 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/28 15:07:02 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"




int main(int ac, char **av){
	Array<int> test(10);
	srand(time(NULL));
	for (size_t i = 0; i < 10; i++)
		test[i] = rand() % 100;
	try
	{
		for (size_t i = 0; i < 10; i++)
			std::cout << test[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "i find nothing\n";
	}

	Array<int> cpy(test);
	try
	{
		std::cout << cpy << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "i find nothing\n";
	}

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
}
