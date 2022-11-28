#ifndef SPAN_H
#define SPAN_H
#include<iostream>
#include <vector>

class Span
{
private:
	unsigned int _size_max;
	std::vector <int> _my_vector;
	Span(void);
public:
	Span(unsigned int N);
	Span(Span & cpy);
	Span & operator=(Span & cpy);
	~Span();
	void addNumber(int num);
	void shortestSpan();
	void longestSpan();
};


#endif // !SPAN_H
