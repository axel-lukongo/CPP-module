/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:40:50 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/24 20:43:22 by alukongo         ###   ########.fr       */
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
	// try
	// {
	// 	for (size_t i = 0; i < 10; i++)
	// 		std::cout << cpy[i] << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "i find nothing\n";
	// }
}