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

	it = std::find(param.begin(), param.end(), val);
	if (it == param.end())
	{
		std::cout << "\033[1;33moccurence not found: \033[0m" << val << std::endl<<std::endl;
		throw (std::exception());
	}
	else
		std::cout << "\033[1;33mOccurence found: \033[0m" << val << std::endl<<std::endl;
}

#endif // !EASYFIND_H