#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain & ins);
		Brain & operator = (const Brain & ins);
		void set_ideas();
		friend std::ostream& operator<<(std::ostream& out, const Brain &brain);
	protected:
		std::string ideas[100];
};

#endif // !BRAIN_HPP