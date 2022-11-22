#ifndef TMP_H
#define TMP_H

#include<iostream>

template< typename T >

T const & max (T const &x, T const & y){
	return ((x >= y) ? x : y);
}

template< typename T >
T & min (T const &x, T const & y){
	return ((x >= y) ? x : y);
}

template< typename T >
void swap(T x, T y){
	T tmp = x;
	x = y
	t = tmp;
}

#endif // !TMP_H
