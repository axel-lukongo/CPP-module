#ifndef SPAN_H
#define SPAN_H
#include<iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int _size_max;
	std::vector <int> _my_vector;
public:
	Span(void);
	Span(unsigned int N);
	Span(Span & cpy);
	Span & operator=(Span & cpy);
	~Span();
	void addNumber(int num);
	int shortestSpan();
	int longestSpan();
	void print_vec();
};


#endif // !SPAN_H
