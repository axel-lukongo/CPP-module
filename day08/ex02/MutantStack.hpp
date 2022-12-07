#ifndef MUTANSTACK_H
#define MUTANSTACK_H
# include <iostream>
# include <stack>
#include "list"
#include "vector"
template <typename T>
class MutantStack: public std::stack<T>
{
private:
	/* data */
public:
	MutantStack(){};
	MutantStack(MutantStack & cpy): std::stack<T>(cpy){
		if (*this != cpy)
			*this = cpy;
	};
	MutantStack & operator = (MutantStack & cpy){
		this->c = cpy.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	//typedef typename std::stack<T, Container>::container_type::iterator iterator;
	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}

	iterator end()
	{
		return (std::stack<T>::c.end());
	}
	~MutantStack(){};
};

#endif // !MUTANSTACK_H