#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>
#include <iostream>
#include <exception>

template<typename T>
void easyfind(T param, int val){
T::const_iterator it;
T::const_iterator ite = src.end();

for (it = param.begin(); it != ite; it++)
{
	if (*it == val)
	{
		std::cout << *it << std::endl;
		return ;
	}
}

}

#endif // !EASYFIND_H