#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain & ins);
		Brain & operator = (const Brain & ins);
		std::string ideas[100];
};

#endif // !BRAIN_HPP