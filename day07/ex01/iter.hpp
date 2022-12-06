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

class ft_iter
{
private:
	int _n;
public:
	ft_iter():_n(42){}
	int get(void)const{return _n;}
	~ft_iter(){};
};
std::ostream & operator << (std::ostream & out, const ft_iter &in){
	out << in.get();
	return out;
}
#endif // !ITER_H