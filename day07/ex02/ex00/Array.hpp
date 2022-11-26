#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
#include <exception>
#include <string>

template <typename T = int>
class Array
{
private:
	T * _tab;
	unsigned int _size;
public:
	Array(){
		_tab = NULL;
		_size = 0;
		std::cout << "default constructor has been called"<< std::endl;
	}
	Array(unsigned int n):_size(n){
		if(n > 0)
		{
			_tab = new T[n];

		}
		else
			_tab = NULL;
		std::cout << "constructor has been called"<< std::endl;
	}

	Array(Array & cpy){
		*this = cpy;
		_tab = NULL;
		_size = 0;
		std::cout << "copy constructor has been called"<< std::endl;
	}

	Array & operator =(Array const & cpy){
		if (_size > 0)
			delete [] _tab;
		if (cpy._size)
		{
			_tab = new T[cpy._size];
			_size = cpy._size;
			for (size_t i = 0; i < _size; i++)
				_tab[i] = cpy._tab[i];
		}
		else
		{
			_tab = NULL;
			_size = 0;
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
		if (_size < 1 || index >= _size)
		{
			std::cout << _size << std::endl;
			std::cout << index << std::endl;
			throw(Overflow());
		}
		else
			return _tab[index];
	};

	~Array(){
		if (_size > 0)
			delete [] _tab;
		std::cout << "destructor has been called"<< std::endl;
	};


	unsigned int size(){
		return _size;
	}
};

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &arr) {
	for(unsigned int i = arr.size(); i < 3; ++i)
	{
		out << "array[ "<< i << "]: ";
		out << arr[i] << std::endl;
	}
	return out;
}

#endif // !ARRAY_H