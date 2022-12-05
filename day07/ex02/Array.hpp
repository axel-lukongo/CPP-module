#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
#include <exception>
#include <string>
#include <stdlib.h>

template <typename T = int>
class Array
{
private:
	T * _tab;
	unsigned int _size_max;
public:
	Array(){
		_tab = NULL;
		_size_max = 0;
		std::cout << "default constructor has been called"<< std::endl;
	}
	Array(unsigned int n):_size_max(n){
		if(n > 0)
		{
			_tab = new T[n];
		}
		else
			_tab = NULL;
		std::cout << "constructor has been called"<< std::endl;
	}

	Array(Array & cpy){
		_tab = NULL;
		_size_max = 0;
		*this = cpy;
		std::cout << "copy constructor has been called"<< std::endl;
	}

	Array & operator =(Array const & cpy){
		if (_size_max > 0)
			delete [] _tab;
		if (cpy._size_max)
		{
			_tab = new T[cpy._size_max];
			_size_max = cpy._size_max;
			for (size_t i = 0; i < _size_max; i++)
				_tab[i] = cpy._tab[i];
		}
		else
		{
			_tab = NULL;
			_size_max = 0;
		}
		std::cout << "assign constructor has been called"<< std::endl;
		return *this;
	};

	class Overflow : public std::exception{
			public:
				virtual const char *what() const throw(){
					return "buffer overflow";
				}
	};

	T & operator[](unsigned int index){
		if (_size_max < 1 || index >= _size_max)
		{
			std::cout << _size_max << std::endl;
			std::cout << index << std::endl;
			throw(Overflow());
		}
		else
			return _tab[index];
	};

	~Array(){
		if (_size_max > 0)
			delete [] _tab;
		std::cout << "destructor has been called"<< std::endl;
	};


	unsigned int size(){
		return _size_max;
	}
};

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &arr) {
	for(unsigned int i = 0; i < arr.size(); ++i)
	{
		out << "array["<< i << "]: ";
		out << arr[i] << std::endl;
	}
	return out;
}

#endif // !ARRAY_H