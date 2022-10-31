/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:35:23 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/31 18:33:34 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

//pas le droit a replace




int main(int ac, char **av){
	if(ac == 4)
	{
		std::string buf, tmp, name;
		std::ifstream file1(av[1]);
		name = av[1];
		std::string str1 = av[2];
		std::string str2 = av[3];
		if (file1.is_open())
		{
			std::ofstream file2 (name.substr(0, name.size()).append(".replace"));
			while (getline(file1, buf))
				tmp += buf + '\n';

			if(str1 != str2)
			{
				while(1)
				{
					int i = tmp.find(str1);
					if (i >= std::string::npos)
						break;
					tmp.erase(i, str1.size());
					buf = tmp.insert(i, str2);
				}
			}
			else
				buf = tmp;
			file2 << buf;
			file1.close();
			file2.close();
		}
	}
	else
		std::cout << "wrong argument" << std::endl;
	return (1);
}
