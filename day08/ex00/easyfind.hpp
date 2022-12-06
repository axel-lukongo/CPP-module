#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>
#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <list>
template<typename T>
void easyfind(T param, int val){
typename T::const_iterator it;
typename T::const_iterator ite = param.end();

for (it = param.begin(); it != ite; it++)
{
	if (*it == val)
	{
		std::cout << "\033[1;33mOccurence found: \033[0m" << val << std::endl<<std::endl;
		return ;
	}
}
	throw (std::exception());
}

#endif // !EASYFIND_H