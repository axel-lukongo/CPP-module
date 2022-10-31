/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:35:23 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/28 17:47:31 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

//pas le droit a replace




int main(int ac, char **av){
	if (ac != 4)
		return (0);
	
	std::string str = av[1];
	std::string replace_file = str.append(".replace");
	std::string other;
	
	std::ifstream test (av[1]);
	// test.open("file.txt");
	if(test.is_open())
	{
		// test >> other;
		while (test >> other)
		{
			std::cout << other << std::endl;
			// test >> other;
		}
	}
	
	// std::ofstream file (replace_file);



	// if (file.is_open())
	// {
	// 	std::cout << "is open"<< std::endl;
	// 	file << "i write something here"<< std::endl;
	// }
}