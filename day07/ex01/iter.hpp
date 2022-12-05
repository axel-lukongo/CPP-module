#ifndef ITER_H
#define ITER_H
#include<iostream>

template<typename T>
void ft_print(T val){
	std::cout << "val: "<<val << std::endl;
}

template<typename T>
void iter(T tab[], int size, void(*f)(T val)){
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

#endif // !ITER_H