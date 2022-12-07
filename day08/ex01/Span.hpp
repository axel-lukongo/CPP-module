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
	Span(Span const & cpy);
	Span & operator=(Span const & cpy);
	~Span();
	void addNumber(int num);
	int shortestSpan();
	int longestSpan();
	void print_vec();
};

// std::ostream &operator<<(std::ostream & out, Span &ins) {
	
// 	for(unsigned int i = 0; i < arr.size(); ++i)
// 	{
// 		out << "array["<< i << "]: ";
// 		out << arr[i] << std::endl;
// 	}
// 	return out;
// }


#endif // !SPAN_H
